#include <iostream>
#include <stdlib.h> // Para memoria dinamica.
#include <string.h>

using namespace std;
int suma_de_todos=0;
void transformar_letras_a_numero(char *, int,int);
bool verificar_numeros(char*,int);
int main()
{
    int digitos,seccion;
    char *p_numero;
    cout<<"De cuantos digitos sera el numero que va a ingresar: "<<endl;
    cin>>digitos;
    p_numero=new char[digitos];
   /*
    do
    {
        cout<<"Por favor, ingrese el numero: "<<endl;
        cin.getline(p_numero,digitos,'\n');
    }while(!verificar_numeros(p_numero,digitos));
    */
    cin>>p_numero;
    cout<<"De cuantos digitos desea que sea las secciones del numero? "<<endl;
    cin>>seccion;
    transformar_letras_a_numero(p_numero,digitos,seccion);
    cout<<"Original: "<<p_numero<<endl;
    cout<<suma_de_todos<<endl;
    delete [] p_numero;
    return 0;
}

/*
bool verificar_numeros(char *linea, int tamanio){
    bool flag=true;
    for (int i=0;i<tamanio;i++) {
        if(!(*(linea+i)>=48 and *(linea+i)<=57))
            flag=false;
    }
    return flag;
}
*/

void transformar_letras_a_numero(char *arreglo, int tamanio, int seccion){
    int limite=tamanio,aux=1,acum;
    for (int posicion = tamanio-seccion;limite>0;suma_de_todos+=acum) {
        acum=0;
        if(posicion<0){
            aux=posicion;
            posicion=0;
        }
        for (int posicion_aux=posicion;posicion_aux<limite;posicion_aux++) {
            acum+=static_cast<int>(*(arreglo+posicion_aux))-48;
            acum*=10;
        }
        if(aux<0)
            posicion=aux;
        posicion-=seccion;
        limite=posicion+seccion;
        acum/=10;
    }
}
