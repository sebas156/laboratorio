#include <iostream>

using namespace std;

int main()
{
    int numero1,numero2,resultado=1;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>numero1>>numero2;
    for (int i = 1;i<=numero2;i++) {
        resultado=resultado*numero1;
    }
    cout<<resultado<<endl;
    return 0;
}
