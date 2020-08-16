#include <iostream>

using namespace std;

int main()
{
    int numero,acumulador=0;
    do
    {
        cout << "Ingrese un numero: " << endl;
        cin>>numero;
        acumulador+=numero;
    }while(numero!=0);
    cout<<"La suma de todos los numeros ingresados antes del cero es: "<< acumulador<<endl;
    return 0;
}
