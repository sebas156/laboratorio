#include <iostream>

using namespace std;
bool palindromo(int);
int main()
{
     int menor=9999999;
    for (int numero1 = 100;numero1<1100;numero1++){
        for (int numero2=9500;numero2<10000;numero2++){
            if(palindromo(numero1*numero2) and numero1*numero2 >1000000){
                if(menor>numero1*numero2){
                    cout<<numero1<<"*"<<numero2<<" = "<<numero1*numero2<<endl;
                    menor=numero1*numero2;
                }
            }
        }
    }

 cout<<"El palindromo mas chico de 7 digitos que se puede obtener mediante la multiplicacion de dos numeros es: "<<menor<<endl;
return 0;
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
