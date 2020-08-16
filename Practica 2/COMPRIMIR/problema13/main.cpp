#include <iostream>

using namespace std;
int numero_estrellas(int matriz [][8]);
void imprimir (int matriz [][8]);
int main()
{
    int matriz[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3}
                      ,{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0}
                      ,{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};

    imprimir(matriz);
    cout<<"El numero de estrellas que hay en la fotografia es: "<<numero_estrellas(matriz)<<endl;
    return 0;
}

int numero_estrellas(int matriz[][8]){
    int cont=0;
    for (int fila =1;fila<5;fila++) {
        for (int columna=1;columna<7;columna++) {
            if((matriz[fila][columna]+matriz[fila][columna-1]+matriz[fila][columna+1]+matriz[fila-1][columna]+matriz[fila+1][columna])/5 > 6)
                cont++;
        }

    }
    return cont;
}

void imprimir (int matriz[][8]){
    for (int filas=0;filas<6;filas++) {
        for (int columnas =0;columnas<8;columnas++) {
            if(columnas==1 or columnas==3 or columnas == 6){
                if((filas==1 and columnas==1)or(filas==3 and columnas==3) or (filas==4 and columnas==3)or(filas==5 and columnas==3)or(filas==2 and columnas==6)or(filas==4 and columnas==6))
                  cout<<matriz[filas][columnas]<<" ";
                else
                  cout<<matriz[filas][columnas]<<"  ";
            }
            else
                cout<<matriz[filas][columnas]<<" ";
        }
        cout<<endl;
    }
}
