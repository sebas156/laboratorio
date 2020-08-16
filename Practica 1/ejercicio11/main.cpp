#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;

    for (int i = 1;i<=10;i++) {
        cout<<i*numero<<endl;
    }
    return 0;
}
