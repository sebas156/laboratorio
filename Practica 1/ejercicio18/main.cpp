#include <iostream>

using namespace std;

int main()
{
    int cuadrado,numero;
    cout << "Ingrese un numero: " << endl;
    cin>>cuadrado;
    for (numero=1;numero<=cuadrado/2;numero++) {
        if(numero*numero==cuadrado)
        {
            cout<<"El numero es un cuadrado perfecto."<<endl;
            break;
        }
    }

    if(numero*numero!=cuadrado)
    {
        cout<<"El numero no es cuadrado perfecto."<<endl;
    }

    return 0;
}
