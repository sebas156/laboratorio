#include <iostream>

using namespace std;

int main()
{
    int numero,acum=0,actual=1,anterior=1,auxiliar;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    cout<<anterior<<" ";
    while(actual<=numero)
    {
        cout<<actual<<" ";
        auxiliar=actual;
        actual+=anterior;
        anterior=auxiliar;
        if(actual%2==0){
            acum+=actual;
        }
    }
    cout<<endl;
    cout<<"La suma de todos los numeros de la serie de fibonacci menores a "<<numero<<" es: "<<acum<<endl;
    return 0;
}
