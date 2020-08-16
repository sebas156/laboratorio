#include "router.h"
#include "funciones.h"
#include <iostream>
#include <string>

RedPermanente::RedPermanente(){
    RedArtificial.clear();
}
void RedPermanente::Limpiar(){
    RedArtificial.clear();
}

void RedPermanente::ObservarTopologia(){
    auto i = RedArtificial.begin();
    i->second.ImprimirTopologia();  // Como cada router conoce la topologia de toda la red, podemos tomar cualquier router para imprimir la misma
                                    // En este caso, se elige el primer router de la red.
}

map<string,router> RedPermanente::GetRedArtificial(){
    return RedArtificial;
}

void RedPermanente::ObtenerRuta(string inicio, string final){
    bool flag = RedArtificial.find(inicio)->second.VerificarPosibleRuta(final);
    if(flag==false)
        cout<<"En el momento no hay una ruta posible entre el enrutador "<<inicio<<" y el "<<final<<" "<<endl;
    else {
        auto ruta =RedArtificial.find(inicio)->second.GetRutaMenosCostosa();
        auto rutamascorta=(*ruta).find(final)->second.begin()->second;
        for(int iterador=0;iterador<rutamascorta.size();iterador++){
               cout<<rutamascorta[iterador];
               if(iterador!=rutamascorta.size()-1)
                   cout<<" -> ";
        }
        cout<<endl;
    }
}

void RedPermanente::ObtenerCosto(string inicio, string final){
    bool flag = RedArtificial.find(inicio)->second.VerificarPosibleRuta(final);
    if(flag==false)
        cout<<"*****"<<endl;
    else {
        auto ruta =RedArtificial.find(inicio)->second.GetRutaMenosCostosa();
        auto valorrutamascorta=(*ruta).find(final)->second.begin()->first;
        cout<<"El valor de la ruta mas corta de el enrutador "<<inicio<<" hasta el "<<final<<" es: "<< valorrutamascorta<<endl;
    }
}

void RedPermanente::BuscarCaminoMasRapido(){

    map<string,map<string,int>> RutasMasCortas;
    map<string,map<string,string>> MatrizRecorrido;
    RutasMasCortas=(*RedArtificial.begin()->second.GetCostosTopologia()); // Iinicializo la matriz de distancias
    for (auto fila:RutasMasCortas) {
        for (auto columna:RutasMasCortas) {
            if(RutasMasCortas[fila.first][columna.first]==-1)
                RutasMasCortas[fila.first][columna.first]=200000000; // Esto se iguala a 200000000 porque en el algoritmo de warshall si entre dos router no hay una conexion directa
        }
    }                                                                // Se debe colocar un infinito, y ya que aqui no es posible esto, decidí igualar a 200000000.
    for (auto i = RedArtificial.begin();i!=RedArtificial.end();++i) {
        for (auto aux:RedArtificial) {                                    //Inicia la matriz de recorrido
            if(aux.first==i->first)
                MatrizRecorrido[i->first].insert(pair<string,string>(aux.first,"-"));
            else
                MatrizRecorrido[i->first].insert(pair<string,string>(aux.first,aux.first));
        }
    }

    for (auto k:RutasMasCortas) {     //Algoritmo de Warshall
        for(auto fila:RutasMasCortas){
            for(auto columna:RutasMasCortas){
                int auxiliar=0;
                if(RutasMasCortas[fila.first][k.first] == 200000000 or RutasMasCortas[k.first][columna.first]==200000000)
                    auxiliar = (RutasMasCortas[fila.first][k.first]<RutasMasCortas[k.first][columna.first])? RutasMasCortas[fila.first][k.first]:RutasMasCortas[k.first][columna.first];
                int dt = RutasMasCortas[fila.first][k.first] + RutasMasCortas[k.first][columna.first]-auxiliar;
                if(RutasMasCortas[fila.first][columna.first]>dt){
                    RutasMasCortas[fila.first][columna.first]=dt;
                    MatrizRecorrido[fila.first][columna.first]=k.first;
                }
            }
        }
    }
    //Las siguientes lineas de codigo leen la matriz de recorridos y extraen la ruta mas corta que hay desde un router a todos los demas.
    // Cada una de estas rutas se va a almacenar en un vector.

    for(auto routers=RedArtificial.begin();routers!=RedArtificial.end();routers++){ // Itero sobre todos los routers de la red
        auto auxiliar=routers->second.GetRutaMenosCostosa(); // Aqui voy a iterar sobre los routes con los que routers.first esta conectado.

        auxiliar->clear(); // (Auxiliar es un puntero) (GetRutaMenosCostosa() devuelve una referencia) Esta linea de codigo es necesaria debeido a que si en una determinada red borro un determinado router, este hecho puede modificar las rutas,
                           // Pero las rutas mas cortas que tenía antes de eliminar el router van a seguir guardas y eso afecta los nuevos rutas menos costosas, por lo que para evitar esto,
                          // Se debe eliminar todo lo que haya en RutaMenosCostosa.

        for(auto auxiliar2:RutasMasCortas[routers->first]){
            if(routers->first==auxiliar2.first)
                (*auxiliar)[auxiliar2.first][auxiliar2.second]={"-"};
            else
                (*auxiliar)[auxiliar2.first][auxiliar2.second]=RutaMasEficiente(MatrizRecorrido,routers->first,auxiliar2.first);
        }
    }

}


bool RedPermanente::VerificarRouter(string RouterIngresado){

    if( RedArtificial.find(RouterIngresado) != RedArtificial.end()) // Si el router si está retorna falso, si no retorna verdadero.
        return false;
    else
        return true;
}


void RedPermanente::setAgregarRouter(string NombreRouter, router NuevoRouter){
    for(auto i=RedArtificial.begin();i!=RedArtificial.end();++i){
        i->second.AgregarEnrutador(NombreRouter,(*NuevoRouter.GetCostosTopologia()).find(NombreRouter)->second);  //Con esta linea de codigo estoy agregando el nuevo router a la topología de los demas.
    }
    RedArtificial.insert(pair<string,router>(NombreRouter,NuevoRouter)); //Agrego el router a la red.

}

void RedPermanente::CargarInformacionAnuevoRouter(router &NuevoRouter){

    if(RedArtificial.empty())
        return;
    auto BaseDatosParaCargarTopologia = RedArtificial.begin()->second.GetCostosTopologia();
    for(auto IteradorSobreBasesDatos:*BaseDatosParaCargarTopologia){                                 //Como cada router tiene la topología de toda la red
        IteradorSobreBasesDatos.second.insert(pair<string,int>(NuevoRouter.NombreEnrutador,-1));
        NuevoRouter.AgregarEnrutador(IteradorSobreBasesDatos.first,IteradorSobreBasesDatos.second); //Solo hace falta elegir alguno para cargar esa topología
    }                                                                                               // AL router ingresado.
}
void RedPermanente::EliminarRouter(string NombreRouterEliminar){
    RedArtificial.erase(NombreRouterEliminar);    //Eliminar el enrutador de la red.
    for(auto iterador=RedArtificial.begin();iterador!=RedArtificial.end();iterador++){
        iterador->second.EliminarEnrutador(NombreRouterEliminar); // Eliminar al enrutador de cada una de las topologías de los routers. Mapa exterior.
                                                                   //Con el codigo anterior estoy borrando el roter de la topología de los routers
    }                                                             // Pero con esta lo que hace es borrar el router de del mapa interior.
}

void RedPermanente:: AgregarRelacion(string &Inicio, string &Final){ // Esta funcion agrega una relacion entre dos routers

     bool flag=RedArtificial.find(Inicio)->second.verificarAgregarEnlace(Final);  // Esta linea de codigo verifica que no haya una relacion pre existente entre los routers ingresados.
     if(flag==false)
         cout<<"No se puede crear una conexion entre dos enrutadores que ya tienen una. "<<endl;
     else {
         int CostoDeComunicacion;
         do{
             cout<<"Ingrese el costo de la comunicacion entre los enrutadiores: "<<endl;
             cin>>CostoDeComunicacion;
             if(CostoDeComunicacion<0 or CostoDeComunicacion==0)
                 cout<<"No tiene sentido hablar de un costo igual o menor a cero. "<<endl;
         }while(CostoDeComunicacion<0 or CostoDeComunicacion==0);
         for (auto i= RedArtificial.begin();i!=RedArtificial.end();++i) {
            i->second.AgregarEnlace(Inicio,Final,CostoDeComunicacion);
         }
     }

}
void RedPermanente::AgregarRelacionAutomatico(string &Inicio, string &Final, int CostoDeComunicacion){ // Esta funcion agrega la relacion entre dos router.
    for (auto i= RedArtificial.begin();i!=RedArtificial.end();++i) {                                   // A diferencia de la funcion AgregarRelacion a esta ya se le tiene que pasar el costo de la comunicacion
       i->second.AgregarEnlace(Inicio,Final,CostoDeComunicacion);                                      // Esta funcion se utiliza cuando yo leo la red de un archivo y cuando genera una red de forma aleatoria.
    }
}

bool RedPermanente::VerificarRelacionAutomaticoGenerarRED(string &Inicio, string &Final){ // Esta linea de codigo verifica que no haya una relacion pre existente entre los routers ingresados.
    bool flag=RedArtificial.find(Inicio)->second.verificarAgregarEnlace(Final);
    return flag;

}
void RedPermanente::CambiarRelacion(string &Inicio, string &Final){  // Cambia la relacion entre dos routers.
    bool flag=RedArtificial.find(Inicio)->second.verificarAgregarEnlace(Final);
    if(flag==true)
        cout<<"No se puede cambiar un costo de enlace entre dos enrutadores que no tienen un enlace "<<endl;
    else {
        int CostoDeComunicacion;
        do{
            cout<<"Ingrese el costo de la comunicacion entre los enrutadiores: "<<endl;
            cin>>CostoDeComunicacion;
            if(CostoDeComunicacion<0 or CostoDeComunicacion==0)
                cout<<"No tiene sentido hablar de un costo igual o menor a cero. "<<endl;
        }while(CostoDeComunicacion<0 or CostoDeComunicacion==0);
        for (auto i= RedArtificial.begin();i!=RedArtificial.end();++i) {
           i->second.AgregarEnlace(Inicio,Final,CostoDeComunicacion);
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////

router::router(string nuevo)
{
    NombreEnrutador=nuevo;
    CostosTopologia.insert(pair<string,map<string,int>>(nuevo,{{nuevo,0}}));
}

void router::ImprimirTopologia(){ // Imprime la topologia de toda la red.

    cout<<"Cada -1 significa que entre los dos routers no hay una conexion directa. "<<endl;
    cout<<"   ";
auto fila=CostosTopologia.begin();
    for(auto columna:CostosTopologia[fila->first]){
        cout<<"   "<<columna.first<<" ";
    }

    for(auto fila:CostosTopologia){
        cout<<endl;
        cout<<fila.first<<"  ";
        for(auto columna:CostosTopologia[fila.first]){
            cout<<"   "<<CostosTopologia[fila.first][columna.first];
            if(CostosTopologia[fila.first][columna.first] != -1)
                cout<<" ";
        }
    }

    cout<<endl<<endl;

}
bool router::VerificarPosibleRuta(string Terminacion){
    auto i = RutaMenosCostosa.find(Terminacion)->second.begin()->first;
    if(i==200000000)
        return false;
    else
        return true;
}



void router::AgregarEnlace(string INICIAL, string FINAL,int CostoDeComunicacion){
     CostosTopologia.find(INICIAL)->second[FINAL]=CostoDeComunicacion;
     CostosTopologia.find(FINAL)->second[INICIAL]=CostoDeComunicacion;
}

bool router::verificarAgregarEnlace(string ElementoConElCualVoyAhacerUnEnlace){
    auto i=CostosTopologia.find(NombreEnrutador)->second.find(ElementoConElCualVoyAhacerUnEnlace);
    if(i->second != -1)
        return false;
    else
        return true;
}
void router::EliminarEnrutador(string NombreRouterEliminar){ // Elima un router de la red.
    CostosTopologia.erase(NombreRouterEliminar);
    for (auto i=CostosTopologia.begin();i!=CostosTopologia.end();++i) {
        i->second.erase(NombreRouterEliminar);
    }
}


void router::AgregarEnrutador(string nuevo,map <string,int> inicial){ //Con esta linea de codigo agrego un nuevo elemento al map que contiene la topoligia de la red.
    CostosTopologia.insert(pair<string,map<string,int>>(nuevo,inicial));
    for (auto i=CostosTopologia.begin();i!=CostosTopologia.end();++i) {
        i->second.insert(pair<string,int>(nuevo,-1));
    }
}

map<string,map<string,int>> * router:: GetCostosTopologia(){
   return &CostosTopologia;
}
map<string,map<int,vector<string>>>* router:: GetRutaMenosCostosa(){
    return &RutaMenosCostosa;
}
