#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese dos numeros: " << endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<endl;
    }
    else if (a==b) {
        cout<<"Los numeros son iguales: "<<endl;
        cout<<b<<" "<<a<<endl;
    }
    else {
        cout<<b<<endl;
    }
    return 0;
}
