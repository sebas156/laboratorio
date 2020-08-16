#include <fstream>
#include <iostream>
#include <string.h> // Vectores de caraceteres
#include <string> // Para strings... No es lo mismo que un vector de caracteres.
using namespace std;
string Decimal_binario(char);
void texto_binario(string &,string &, int);
void metodo1(string);
void invertir_cada_uno(string &, string &, int, int);
void invertir_cada_numero(string &,string &,int, int, int);
void metodo2(string);
string desplazar(string &,int, int);
int main()
{
    string nombrearchivo;
    char opcion;
    cout<<"Somos una empresa comprometida con la privacidad de nuestros usuairos."<<endl;
    cout<<"En este momento disponemos de dos metodos de encriptacion."<<endl;
    do{
        cout<<"Ingrese 1 si desea hacer uso del metodo 1. \nIngrese 2 si desea hacer uso del metodo 2 \nIngrese 3 si desea salir."<<endl;
        cin>>opcion;
        switch (opcion) {   //Recordar que para la lectura de un documento hay que poner la direccion del mismo.
        case '1':
            cout<<"Ingrese el nombre del archivo: "<<endl;
                    cin>>nombrearchivo;
            metodo1(nombrearchivo);
            break;
        case '2':
            cout<<"Ingrese el nombre del archivo: "<<endl;
                    cin>>nombrearchivo;
            metodo2(nombrearchivo);
            break;
        case '3':
            cout<<"GRACIAS POR PREFERIRNOS"<<endl;
            break;
        default:
            cout<<"Opcion no reconocida, ingrese nuevamente una opcion"<<endl;
        }

    }while(opcion != '3');

    return 0;
}

string Decimal_binario(char letra_leida){
    string binario="";
    int letra,residuo;
    char numero[1];
    letra=letra_leida;
    for (int indice = 1;indice<=8;indice++) {
            residuo=letra%2 + 48;
            letra/=2;
            numero[0]=static_cast<char>(residuo);
            binario=numero+binario;
    }
    return binario;
}

void texto_binario(string &original,string &binario,int tamanio){
    for (int i = 0;i<tamanio;i++) {
        binario+=Decimal_binario(original[i]);
    }
}

void invertir_cada_uno(string &original, string & codificado, int semilla, int actual){
    for (int i=0;i<semilla;i++) {
        if((actual+i)>original.size()-1)
            break;
        if(original[actual+i]=='0')
            codificado+='1';
        else
            codificado+='0';
    }
}
void invertir_cada_numero(string &original,string&codificado,int semilla, int actual, int cada_n){
    for (int i=1;i<=semilla;i++) {
        if((actual+i-1)>original.size()-1)
            break;
        if(i%cada_n==0){
            if(original[actual+i-1]=='0')
                codificado+='1';
            else
                codificado+='0';
        }
        else
            codificado+=original[actual+i-1];
    }
}
void metodo1(string NombreArchivo){
    string linea,CadenaBinaria="",codificado="";
    int semilla,ceros=0,unos=0;
    cout<<"Ingrese la semilla de codificacion: "<<endl;
    cin>>semilla;
    ifstream archivo(NombreArchivo);
    ofstream archivobinario("encriptadometodo1.dat",ios::binary);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }else {
        getline(archivo,linea);
        texto_binario(linea,CadenaBinaria,linea.size());
        for (int actual=0;actual<CadenaBinaria.size();actual+=semilla) {
            if(unos==ceros)
                invertir_cada_uno(CadenaBinaria,codificado,semilla,actual);
            else if (unos < ceros)
                invertir_cada_numero(CadenaBinaria,codificado,semilla,actual,2);
            else
                invertir_cada_numero(CadenaBinaria,codificado,semilla,actual,3);

            unos=0;
            ceros=0;
            for (int aux_semilla = 0;aux_semilla<semilla;aux_semilla++) {
                if(CadenaBinaria[actual+aux_semilla]=='0')
                    ceros++;
                else
                    unos++;
            }

        }
        archivobinario<<codificado<<endl;
    }
    archivo.close();
    archivobinario.close();

}

string desplazar(string &original,int semilla, int actual){
    string fragmento_desplazado="";
    int i;
    for (i =0;i<semilla-1;i++) {
        if((actual+i)>original.size()-2)
            break;
        fragmento_desplazado+= original[actual+i];
    }
    fragmento_desplazado=original[actual+i]+fragmento_desplazado;
    return fragmento_desplazado;
}
void metodo2(string NombreArchivo){
    string linea,CadenaBinaria="",codificado="";
    int semilla,ceros=0,unos=0;
    cout<<"Ingrese la semilla de codificacion: "<<endl;
    cin>>semilla;
    ifstream archivo(NombreArchivo);
    ofstream archivobinario("encriptadometodo2.dat",ios::binary);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }else {
        getline(archivo,linea);
        cout<<linea<<endl;
        texto_binario(linea,CadenaBinaria,linea.size());
        for (int actual =0;actual<CadenaBinaria.size();actual+=semilla) {
            codificado+=desplazar(CadenaBinaria,semilla,actual);
        }
        archivobinario<<codificado<<endl;
        }
    archivo.close();
    archivobinario.close();
    }


