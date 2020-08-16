#include <iostream>

using namespace std;
int suma (int);
int suma_divisores(int);
int main()
{
    int limite;
    cout << "Ingrese el numero limite: " << endl;
    cin>>limite;
    cout<<"La suma de todos los numeros amigables menores que "<<limite<<" es: "<<suma(limite)<<endl;
    return 0;
}

int suma_divisores(int numero){
    int acum=0;
    for (int divisor=1;divisor<=numero/2; divisor++) {
        if(numero%divisor==0)
            acum+=divisor;
    }
    return acum;
}

int suma (int limite){
    int acum=0, otronumero;

    for (int numero1 = 220;numero1<limite;numero1++) {
        otronumero=suma_divisores(numero1);
        if(numero1==suma_divisores(otronumero) and numero1 != otronumero)
            acum+=numero1;
    }
    return  acum;
}
