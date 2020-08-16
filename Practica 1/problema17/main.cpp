#include <iostream>

using namespace std;
int numero_divisores (int);
int main()
{
    int numero;
    cout << "Ingrese el numero minimo de divisores que desee que tenga el numero triangular: " << endl;
    cin>>numero;

    cout<<"El numero "<<numero_divisores (numero)<<" es el primer numero triangular con un numero de divisores mayor que "<<numero<<endl;
    return 0;
}

int numero_divisores (int numero){
    int cont=0,actual;
    for (int indicador=1;cont<=numero;indicador++) {
        cont=1;
        actual=(indicador*(indicador+1))/2;
        for (int divisor=1;divisor<=actual/2;divisor++) {
            if(actual%divisor==0)
                cont++;
        }

    }

    return actual;
}
