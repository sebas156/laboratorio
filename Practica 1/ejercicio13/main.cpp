#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    cout<<endl;
    for (int divisores = 1;divisores <= numero/2;divisores++) {
        if(numero%divisores==0)
        {
            cout<<divisores<<endl;
        }
    }
    cout<<numero<<endl;
    return 0;
}
