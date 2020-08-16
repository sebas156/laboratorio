#include <iostream>
#include <math.h>
void rotar_noventa(int matriz[5][5],int matriz_rotada[5][5]);
void imprimir(int matriz[5][5]);
void rotar_doscientos_noventa(int matriz[5][5], int matriz_rotada[5][5]);
using namespace std;

int main()
{
    int i=1;
    int matriz[5][5],matriz_rotada[5][5];
    for (int filas=0;filas<5;filas++) {
        for (int columnas=0;columnas<5;columnas++) {
            matriz[filas][columnas]=i;
            i++;
        }
    }
    cout<<"Original: "<<endl;
    imprimir(matriz);
    cout<<endl;
    cout<<"Rotada 90 grados"<<endl;
    rotar_noventa(matriz,matriz_rotada);
    imprimir(matriz_rotada);
    cout<<endl;
    cout<<"Rotada 180 grados"<<endl;
    rotar_noventa(matriz_rotada,matriz);
    imprimir(matriz);
    cout<<endl;
    cout<<"Matriz rotada 270"<<endl;
    rotar_doscientos_noventa(matriz_rotada,matriz);
    imprimir(matriz);
    return 0;
}

void rotar_noventa(int matriz[5][5],int matriz_rotada[5][5]){
    int aux;
    for (int filas=0;filas<5;filas++) {
        for (int columnas=0;columnas<5;columnas++) {
            aux=fabs(filas-4);
            matriz_rotada[columnas][aux]=matriz[filas][columnas];
        }
    }
}

void imprimir(int matriz[5][5]){
    for (int filas=0;filas<5;filas++) {
        for (int columnas=0;columnas<5;columnas++) {
            cout<<matriz[filas][columnas]<<" ";
        }
        cout<<endl;
    }
}

void rotar_doscientos_noventa(int matriz[5][5], int matriz_rotada[5][5]){
    int aux;
    for (int filas=0;filas<5;filas++) {
        for (int columnas=0;columnas<5;columnas++) {
            aux=fabs(columnas-4);
            matriz_rotada[filas][aux]=matriz[filas][columnas];
        }
    }
}
