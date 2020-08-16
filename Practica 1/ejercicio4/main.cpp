#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese dos numeros: " << endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<endl;
    }
    else if (a==b) {
        cout<<"Los numeros son iguales: "<<endl;
        cout<<b<<" "<<a<<endl;
    }
    else {
        cout<<a<<endl;
    }
    return 0;
}
