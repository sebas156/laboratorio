#include <iostream>

using namespace std;

int main()
{
    int mayor,numero;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    mayor=numero;
    while(numero!=0)
    {
        cout << "Ingrese un numero: " << endl;
        cin>>numero;
        if(numero>mayor)
        {
            mayor=numero;
        }
    }
    cout<<"El mayor de todos los numeros ingresados antes del cero es el: "<<mayor<<endl;
    return 0;
}
