#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    cout<<endl;
    for (int repeticion= 1;repeticion<=5;repeticion++) {
        int resultado=1;
        for (int potencia = 1;potencia<=repeticion;potencia++) {
            resultado*=numero;
        }
        cout<<resultado<<endl;
    }
    return 0;
}
