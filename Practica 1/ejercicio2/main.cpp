#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese u numero: " << endl;
    cin >> numero;
    if(numero%2==0)
    {
        cout<<"El numero ingresado es par."<<endl;
    }
    else {
        cout<<"El numero ingresado es impar."<<endl;
    }
    return 0;
}
