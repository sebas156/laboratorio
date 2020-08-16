#include "funciones.h"
#include "router.h"
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>


char MenuPrincipal(){
    char opcion;
    cout<<"A) Agregar enrutador."<<endl;
    cout<<"B) Eliminar enrutador."<<endl;
    cout<<"C) Agregar relacion."<<endl;
    cout<<"D) Obtener ruta."<<endl;
    cout<<"E) Obtener costo."<<endl;
    cout<<"F) Obtener tabla de enrutamiento."<<endl;
    cout<<"H) Cambiar costo."<<endl;
    cout<<"I) Cargar archivo."<<endl;
    cout<<"J) Generar red."<<endl;
    cout<<"K) Observar toplogia de la red. "<<endl;
    cout<<"M) Salir. "<<endl;
    cin>>opcion;
    return opcion;
}

void AgregarElementoActualizar(RedPermanente& RED, router NuevoRouter){

    RED.CargarInformacionAnuevoRouter(NuevoRouter); // Esta funcion carga la topología de la red al nuevo router.
    RED.setAgregarRouter(NuevoRouter.NombreEnrutador,NuevoRouter); // Esta funcion agrega el nuevo router a la red y tambien a la topologia de todos los demas routers

}

void EliminarElementoActualizar(RedPermanente& RED, string NombreRouterEliminar){
    RED.EliminarRouter(NombreRouterEliminar);
}

vector<string> RutaMasEficiente(map<string,map<string,string>> MatrizDeRecorrido, string fila,string columna){
 /* Esta funcion recibe el nombre router inicio y el nombre del router final. Tambien recibe la matriz de recorridos.
  * Esta funcion lo que hace es leer de la tabla que forma la matriz de recorridos la ruta que se debe seguir para ir de router
  * inicial al final y dicha ruta la poner en un vector.
  */
    bool flag;
    vector<string> resultado,auxiliar1;
    resultado.push_back(fila);
        if(MatrizDeRecorrido[fila][columna]==columna)
            resultado.push_back(columna);
        else
            resultado.push_back(MatrizDeRecorrido[fila][columna]);
            RutaMasCortaRecursividad(resultado,fila,MatrizDeRecorrido[fila][columna],MatrizDeRecorrido,columna);
    if(resultado[resultado.size()-1]!=columna)
        resultado.push_back(columna);

    //Como lo que hace es leer de una tabla, la estructura de la tabla proboca que en el vector hayan elementos repetidos
    // Las lineas siguientes se encargan de eliminar esos elementos repetidos.
    for (int i=0;i<resultado.size();i++) {   //Invertir el vector resultante.
        flag=false;
        for (int i2=0;i2<auxiliar1.size();i2++) {
            if(resultado[resultado.size()-1-i]==auxiliar1[i2])    //Eliminar los elementos que esten repetidos.
                flag=true;
        }
        if(flag==false)
            auxiliar1.push_back(resultado[resultado.size()-1-i]);
    }
    resultado.clear();
    for (int i2=0;i2<auxiliar1.size();i2++) {
        resultado.push_back(auxiliar1[auxiliar1.size()-1-i2]); //Volver a invertir el vector invertido que ya no tiene elementos repetidos,
    }
    return resultado;
}

void RutaMasCortaRecursividad(vector<string> & VectorResultante, string fila,string columna, map<string,map<string,string>> & MatrizDeRecorridoRecursividad, string final){

    if(MatrizDeRecorridoRecursividad[fila][columna]!=columna){
        VectorResultante.push_back(MatrizDeRecorridoRecursividad[fila][columna]);
        RutaMasCortaRecursividad(VectorResultante,fila,MatrizDeRecorridoRecursividad[fila][columna],MatrizDeRecorridoRecursividad,final);
    }
    else if (MatrizDeRecorridoRecursividad[fila][columna]==columna and MatrizDeRecorridoRecursividad[fila][columna] != final) {
        RutaMasCortaRecursividad(VectorResultante,MatrizDeRecorridoRecursividad[fila][columna],final,MatrizDeRecorridoRecursividad,final);
    }
}

void ObtenerTablaEnrutamiento(RedPermanente& RED,string inicio){
    for(auto final:RED.GetRedArtificial()){
        cout<<"Ruta: ";
        RED.ObtenerRuta(inicio,final.first);
        RED.ObtenerCosto(inicio,final.first);
        cout<<endl;

    }
}

void CargarArchivo(RedPermanente& RED){
    string lineaLeida;
    string router1,router2,NombreArchivo;
    cout<<"No olvides la extension .txt"<<endl;
    cout<<"Ingrese el nombre del archivo: "<<endl;
    cin>>NombreArchivo;
    ifstream archivo(NombreArchivo);
    if(archivo.fail())
        cout<<"No se pudo abrir el archivo. "<<endl;
    else {
        while (!archivo.eof()) {
            int CostoDecomunicacion=0;
            getline(archivo,lineaLeida);
            if(lineaLeida.find("+")!=-1){
                router1=lineaLeida.substr(0,lineaLeida.find("+"));
                lineaLeida=lineaLeida.substr(lineaLeida.find("+")+1,lineaLeida.size()-1-lineaLeida.find("+"));
                router2=lineaLeida.substr(0,lineaLeida.find("="));
                lineaLeida=lineaLeida.substr(lineaLeida.find("=")+1,lineaLeida.size()-1-lineaLeida.find("="));
                for (int i=0;i<lineaLeida.size();i++) {
                    CostoDecomunicacion+=lineaLeida[i]-48;
                    CostoDecomunicacion*=10;
                }
                CostoDecomunicacion/=10;
                RED.AgregarRelacionAutomatico(router1,router2,CostoDecomunicacion);
            }
            else {
                router auxiliar(lineaLeida);
                AgregarElementoActualizar(RED,auxiliar);
            }

        }

    }

}


void GenerarRedAleatoria(RedPermanente& RED){
    int NumeroEnrutadores,CostoEnlace,PaReja;
    string NombreEnrutador;
    vector<string> Enrutadores;
    srand(time(NULL));
    NumeroEnrutadores= 5 + rand()% (8+1-5); // Numero de enrutadores que va a tener toda la red
    for (int i=1;i<=NumeroEnrutadores;i++) {
        NombreEnrutador=65 + rand()% (90+1-65); //Esta linea de codigo establece el nombre del router... Cuando la red es generada los nombres de los routers correspondran a las letras del abecedario en mayuscula.
        auto indicador=RED.GetRedArtificial();
        auto Presencia=indicador.find(NombreEnrutador);
        if(Presencia==indicador.end()){
        Enrutadores.push_back(NombreEnrutador); //Aqui guardo los nombres de todos los routers en la red para luego acceder facilmente a ellos.
        router auxiliar(NombreEnrutador);
        AgregarElementoActualizar(RED,auxiliar);
        }
        else {
           i--;
        }
    }
    for(int iterador=0;iterador<Enrutadores.size();iterador++){
        NumeroEnrutadores= 1 + rand()% (3); // Esta linea de codigo determina el numero de enlaces que va a tener cada enrutador.
        for (int i=1;i<=NumeroEnrutadores;i++) {
            PaReja= rand()% (Enrutadores.size());
            if(Enrutadores[iterador]!=Enrutadores[PaReja] and RED.VerificarRelacionAutomaticoGenerarRED(Enrutadores[iterador],Enrutadores[PaReja])!=false){
                CostoEnlace=1 + rand()% (8); //Aqui se establece el costo de enlace
                RED.AgregarRelacionAutomatico(Enrutadores[iterador],Enrutadores[PaReja],CostoEnlace);
            }
        }
    }



}
