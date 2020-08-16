#include <iostream>

using namespace std;

int main()
{
    int numero,contador=0;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    while(numero>0)
    {
        numero=numero/10;
        contador++;
    }
    cout<<"El numero de digitos del numero ingresado es: "<<contador<<endl;

    return 0;
}
