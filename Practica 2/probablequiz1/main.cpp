#include <iostream>

using namespace std;
int fecha_numero(int [],int);
bool verificar_fecha_ingresada(int[],int);
bool palindromo(int);
void contador_tiempo(int [],int);
int main()
{
    int actual[3];
    do{
        cout<<"Ingrese la fecha desde la cual quieres buscar: ";
        cout<<"Dia: ";cin>>actual[0];
        cout<<"Mes: ";cin>>actual[1];
        cout<<"Año: ";cin>>actual[2];
    }while(verificar_fecha_ingresada(actual,3)==false);

    contador_tiempo(actual,3);
    return 0;
}

bool verificar_fecha_ingresada(int fecha[],int tamanio){
    if(fecha[0] < 1 or fecha[0] > 31 or fecha[1] < 1 or fecha[1] > 12 or fecha[2] < 1) // Interesante punto de vista! Tener en cuenta.
    {
        return false;
    }

    switch (fecha[1]) { // Curiosa forma de utilizar el swicth... Tener en cuenta.
    case (4):
    case (6):
    case (9):
    case (11):
        if ( fecha[0] > 30){
            return false;
        }
        break;
    case (2):
        if (fecha[0] >28){
            return false;
        }
        break;
    case (1):
    case (3):
    case (5):
    case (7):
    case (8):
    case (10):
    case (12):
        if ( fecha[0] > 31){
            return false;
        }
        break;
    default:
        return false;
    }
    return true;
}
void contador_tiempo(int fecha[], int tamanio){
    do
    {
        fecha[0]++;
        if(!verificar_fecha_ingresada(fecha,tamanio)){
            fecha[0]=1;
            fecha[1]++;
        }

        if(!verificar_fecha_ingresada(fecha,tamanio)){
            fecha[1]=1;
            fecha[2]++;
        }



    }while(!palindromo(fecha_numero(fecha,tamanio)));
}

int fecha_numero(int fecha [],int magnitud){
    int construir=0,aux,copia;
    for (int posicion =0;posicion<3;posicion++) {
        int cont=0,divisor=10;
        aux=fecha[posicion];
        copia=aux;
        while (aux>0) {
            aux/=10;
            cont++;
        }
        for (int i=1;i<cont;i++) {
            divisor*=10;
        }
        if(posicion==2){
            divisor/=10;
        }

        while (copia>0) {
            construir+=(copia-(copia%divisor))/divisor;
            if(copia<10){
                construir+=copia%divisor;
            }
            construir*=10;
            copia=copia%divisor;
            divisor/=10;
        }

    }

    return construir;

}
bool palindromo(int numero){
    int copia,aux,*invertido,contador=0;
    copia=numero;
    aux=numero;
    invertido=&copia;

    while(copia>0)
    {
        copia=copia/10;
        contador++;
    }

    for (int i = 1;i<=contador;i++) {
        *invertido+=numero%10;
        *invertido*=10;
        numero/=10;
    }
    *invertido/=10;
    if(*invertido==aux)
    {
        return true;
    }
    else {
        return false;
    }
}
