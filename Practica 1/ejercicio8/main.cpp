#include <iostream>

using namespace std;

int main()
{
    int numero1,resultado=1;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>numero1;
    for (int i = 1;i<=numero1;i++) {
        resultado*=i;
    }
    cout<<resultado<<endl;
    return 0;
}
