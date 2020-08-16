#include <iostream>

using namespace std;

int main()
{
    int numero,mcd=1,mcm=1,r,aux;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    for (int i=1;i<=numero;i++) {
        aux=mcm;
        mcd=i;
        do
        {
            r=mcd%aux;
            mcd=aux;
            aux=r;

        }while(r!=0);

        mcm= mcm*i/mcd;
    }



    cout<<"El minimo comun multiplo de los numeros de 1 a "<<numero<<" es: "<<mcm<<endl;
    return 0;
}
