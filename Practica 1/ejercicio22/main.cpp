#include <iostream>

using namespace std;

int main()
{
    int numero,segundos,minutos;
    cout << "Ingrese la cantidad de segundos: " << endl;
    cin>>numero;
    segundos=numero%60;
    numero/=60;
    minutos=numero%60;
    numero/=60;
    cout<<"Horas: "<<numero<<" Minutos: "<<minutos<<" Segundos: "<<segundos<<endl;
    return 0;
}
