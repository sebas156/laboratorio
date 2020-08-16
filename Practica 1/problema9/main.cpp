#include <iostream>

using namespace std;

int main()
{
    int numero,acum=0,base,resultado;
        cout << "Ingrese un numero: " << endl;
        cin>>numero;
        while(numero>0)
        {
            base=numero%10;
            cout<<base<<" ";
            resultado=base;
            for (int exp =1;exp<base;exp++) {
                resultado*=base;
            }
            acum+=resultado;
            numero=numero/10;
        }

        cout<<endl;
        cout<<acum<<endl;

    return 0;
}
