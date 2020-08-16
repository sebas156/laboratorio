#include <iostream>

using namespace std;

int main()
{
    int numero,acumulador=0,contador=0;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    while(numero!=0)
    {
        acumulador+=numero;
        contador++;
        cout << "Ingrese un numero: " << endl;
        cin>>numero;

    }
    cout<<"El promedio de todos los numeros ingresados antes del cero es: "<< (float)acumulador/(float)contador<<endl;
    return 0;
}
