#include <iostream>

using namespace std;
bool palindromo(int);
int main()
{
    int mayor=1;
    for (int numero1 = 999;numero1>=100;numero1--) {
        for (int numero2=999;numero2>=100;numero2--) {
            if(palindromo(numero1*numero2)){
                if(numero1*numero2>mayor){
                    mayor=numero1*numero2;
                }
            }
        }
    }

    cout<<"El palindromo mas grande que se puede obtner con una multiplicacion de tres digitos es: "<<mayor<<endl;
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
