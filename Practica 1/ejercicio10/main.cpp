#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingresa un numero: " << endl;
    cin>>numero;
    for (int i=1;i<=100;i++) {
        if(i%numero==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
