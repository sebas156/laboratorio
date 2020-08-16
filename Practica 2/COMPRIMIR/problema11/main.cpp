#include <iostream>

using namespace std;

void imprimir_matriz(char matriz [][20]);
char menu ();
void reservar(char cine[][20],int,int);
void cancelar(char cine[][20],int,int);
int main()
{
    int columna;
    char sala_cine[15][20],opcion,fila;
    for (int filas = 0;filas<15;filas++) {
        for (int columnas =0;columnas<20;columnas++) {
            *(*(sala_cine + filas)+columnas)='+';
        }
    }
    do{
        imprimir_matriz(sala_cine);
        opcion=menu();
        if(opcion != '3'){
            do{
                cout<<"Ingrese la fila: "<<endl;
                cin>>fila;
                cout<<"Ingrese la columna: "<<endl;
                cin>>columna;
            }while(fila<65 or fila > 90 or columna < 1 or columna > 20);
        }
        switch (opcion) {
            case '1' :
                reservar(sala_cine,fila-65,columna-1);
            break;
            case '2' :
            cancelar(sala_cine,fila-65,columna-1);
            break;
            case '3' :
            cout<<"Gracias por preferirnos."<<endl;
            break;
        }

    }while(opcion != '3');

    return 0;
}

void imprimir_matriz(char matriz[][20]){
    char fila='A';
    cout<<" ";
    cout<<"     "<<1;
    for (int i=2;i<=9;i++) {
        cout<<"    "<<i;
    }
    for (int i=10;i<=20;i++) {
        cout<<"   "<<i;
    }
    cout<<endl;
    for (int filas =0;filas<15;filas++) {
        cout<<fila<<" ";
        for (int columnas=0;columnas<20;columnas++) {
            cout<<"    "<<*(*(matriz+filas)+columnas);
        }
        cout<<endl;
        fila++;
    }
}

char menu(){
    char opcion;
    cout<<"CINE BONILLA."<<endl;
    cout<<"Revolucionando la experiencia del cine."<<endl;
    do{
        cout<<"Reservar (1) "<<endl;
        cout<<"Cancelar (2) "<<endl;
        cout<<"Salir    (3) "<<endl;
        cin>>opcion;
    }while(opcion != '1' and opcion != '2' and opcion != '3');
    return  opcion;
}

void reservar(char cine[][20], int fila, int columna){
    if(*(*(cine + fila)+columna) != '+')
        cout<<"Lo sentimos, pero esa ubicacion ya se encuentra reservada."<<endl;
    else
        *(*(cine + fila)+columna)='-';
}

void cancelar(char cine[][20], int fila, int columna){
    if(*(*(cine + fila)+columna) != '-')
        cout<<"No puedes cancelar la reservacion de una psocicion que no se ha reservado."<<endl;
    else
        *(*(cine + fila)+columna)='+';
}
