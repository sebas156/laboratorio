#include <iostream>

using namespace std;

int main()
{
    int a,b,r;
    char operacion;
    cout << "CALCULADORA" << endl;
    cout <<"Ingrese por favor dos numeros: "<<endl;
    cin>>a>>b;
    cout << "Suma (+)" << endl;
    cout << "Resta (-)" << endl;
    cout << "Multiplicacion (*)" << endl;
    cout << "Division (/)" << endl;
    cout<<endl;
    cin>>operacion;
    switch (operacion) {
        case '+':
            r=a+b;
        break;
        case '-':
            r=a-b;
        break;
        case '*':
            r=a*b;
        break;
        case '/':
           r=a/b;
        break;
    default:
        cout<<"Caracter no identificado"<<endl;
}
    cout<<a<<operacion<<b<<"="<<r<<endl;
    return 0;
}
