#include <math.h>
#include <fstream>
#include <iostream>
#include <string.h> // Vectores de caraceteres
#include <string> // Para strings... No es lo mismo que un vector de caracteres.

using namespace std;
int Binario_decimal(string);
void binario_texto(string &,string &, int);
void decodificar_metodo1(string);
void invertir_cada_uno(string &, string &, int, int);
void invertir_cada_numero(string &,string &,int, int, int);
string desplazar_decodificar(string &,int , int );
void decodificar_metodo2(string);
int main()
{
    char opcion;
    string NombreArchivoLeer;
    cout<<"Nuestra emresa se enorgullece de mencionar que somos capaces de desencriptar cualquier mensaje."<<endl;
    cout<<"Actualmente tenemos dos metodos de desencriptado."<<endl;
    do{
        cout<<"Ingresa 1 si quieres ejercutar el metodo 1:\nIngresa 2 si quieres ejecutar el metodo 2.\nIngresa 3 si quieres salir"<<endl;
        cin>>opcion;
        switch (opcion) {  // Recordar que para leer un archivo hay que poner la dirrecion del archivo.
        case '1':
            cout<<"Ingrese el nombre del archivo: "<<endl;
                    cin>>NombreArchivoLeer;
            decodificar_metodo1(NombreArchivoLeer);
            break;
        case '2':
            cout<<"Ingrese el nombre del archivo: "<<endl;
                    cin>>NombreArchivoLeer;
            decodificar_metodo2(NombreArchivoLeer);
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


int Binario_decimal(string letra_leida){
    int letra=0;
    for (int exp = 7; exp >=0;exp--) {
        if(letra_leida[7-exp]=='1')
            letra+=pow(2,exp);
    }
    return letra;
}

void binario_texto(string &binario,string &normal,int tamanio){
    for (int i = 0;i<tamanio;i+=8) {
        string auxiliar_letra="";
        for (int aux=0;aux<8;aux++) {
            auxiliar_letra+=binario[i+aux];
        }
        normal+=Binario_decimal(auxiliar_letra);
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
void decodificar_metodo1(string NombreArchivo){
    string CadenaBinariaCodificada,CadenaDescodificada="",Texto_Legible="";
    int semilla,ceros=0,unos=0;
    cout<<"Ingrese la semilla de codificacion: "<<endl;
    cin>>semilla;
    ifstream archivobinario(NombreArchivo,ios::binary);
    ofstream archivotexto("pruebadecodificarmetodo1.txt");
    if(archivobinario.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }else {
        getline(archivobinario,CadenaBinariaCodificada);
        for (int actual=0;actual<CadenaBinariaCodificada.size();actual+=semilla) {
            if(unos==ceros)
                invertir_cada_uno(CadenaBinariaCodificada,CadenaDescodificada,semilla,actual);
            else if (unos < ceros)
                invertir_cada_numero(CadenaBinariaCodificada,CadenaDescodificada,semilla,actual,2);
            else
                invertir_cada_numero(CadenaBinariaCodificada,CadenaDescodificada,semilla,actual,3);

            unos=0;
            ceros=0;
            for (int aux_semilla = 0;aux_semilla<semilla;aux_semilla++) {
                if(CadenaDescodificada[actual+aux_semilla]=='0')
                    ceros++;
                else
                    unos++;
            }

        }
        binario_texto(CadenaDescodificada,Texto_Legible,CadenaDescodificada.size());
        archivotexto<<Texto_Legible<<endl;
    }
    archivotexto.close();
    archivobinario.close();

}

string desplazar_decodificar(string &original,int semilla, int actual){
    string fragmento_desplazado="";
    int i;
    for (i =0;i<semilla-1;i++) {
        if((actual+i)>original.size()-2)
            break;
        fragmento_desplazado+= original[actual+i+1];
    }
    fragmento_desplazado+=original[actual];
    return fragmento_desplazado;
}


void decodificar_metodo2(string NombreArchivo){
    string CadenaBinariaCodificada,CadenaDescodificada="",Texto_Legible="";
    int semilla,ceros=0,unos=0;
    cout<<"Ingrese la semilla de codificacion: "<<endl;
    cin>>semilla;
    ifstream archivobinario(NombreArchivo,ios::binary);
    ofstream archivotexto("pruebadecodificarmetodo2.txt");
    if(archivobinario.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }else {
        getline(archivobinario,CadenaBinariaCodificada);
        for (int actual =0;actual<CadenaBinariaCodificada.size();actual+=semilla) {
            CadenaDescodificada+=desplazar_decodificar(CadenaBinariaCodificada,semilla,actual);
        }
        cout<<CadenaDescodificada<<endl;
        binario_texto(CadenaDescodificada,Texto_Legible,CadenaDescodificada.size());
        archivotexto<<Texto_Legible<<endl;
        }
    archivobinario.close();
    archivotexto.close();
    }
