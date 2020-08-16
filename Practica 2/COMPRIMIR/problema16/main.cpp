#include <iostream>
// (A+D)! / A!B!
using namespace std;
unsigned int factorial(unsigned int);
int main()
{
    unsigned int caminos;
    unsigned int dimension;
    cout << "Ingrese la un numero: " << endl;
    cin>>dimension;

    caminos=factorial(2*dimension);
    caminos/=factorial(dimension);
    caminos/=factorial(dimension);

    cout<<"El numero de caminos en una cuadricula de "<<dimension<<"x"<<dimension<<" es: "<<caminos<<endl;
    return 0;
}

unsigned int factorial (unsigned int numero){
    // Calculando el factorial de un numero a traves de recursividad.
    if(numero==1){
        return numero;
    }
    else {
        return numero*factorial(numero-1);
    }
}
