#include <iostream>

using namespace std;

int contar_digitos(int);
void entero_a_arreglo(int,int,int[]);
void imprimir(int [],int);
int main()
{
    int convertir;
    cout<<"Por favor, ingrese un numero: "<<endl;
    cin>>convertir;
    int array[contar_digitos(convertir)];
    entero_a_arreglo(convertir,sizeof (array)/sizeof (int),array);
    imprimir(array,sizeof (array)/sizeof (int));
     return 0;
}
int contar_digitos(int numero){
    int cont=0;
    for (int i=10;numero>0;numero/=i) {
        cont++;
    }
    return cont;
}

void entero_a_arreglo(int numero,int tamanio,int arreglo[]){
    for (int i = 10;numero>0;numero/=i) {
        arreglo[tamanio-1]=numero%i;
        tamanio--;
    }
}

void imprimir(int arreglo [],int tamanio){
    for (int posicion=0;posicion<tamanio;posicion++) {
        cout<<"Arreglo["<<posicion<<"] = "<<arreglo[posicion]<<endl;
    }
}
