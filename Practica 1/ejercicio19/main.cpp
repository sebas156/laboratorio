#include <iostream>

using namespace std;

int main()
{
    int numero, contador=0;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    for (int divisor=1;divisor<=numero/2;divisor++) {
        if(numero%divisor==0)
        {
            contador++;
        }
    }
    contador++;
    if(contador==2)
    {
        cout<<"El numero ingresado es un numero primo."<<endl;
    }
    else {
        cout<<"El numero ingresado NO es un numero primo."<<endl;
    }
    return 0;
}
