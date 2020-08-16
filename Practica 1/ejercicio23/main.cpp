#include <iostream>

using namespace std;

int main()
{
    int a,b,aux,r=1,n1,n2;
    cout << "Ingrese dos numero: " << endl;
    cin>>a>>b;
    if(a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    n1=a;
    n2=b;
    for (;r!=0;) { // Algoritmo de euclides
        r=a%b;
        a=b;
        b=r;
    }

    cout<<"El m.c.m entre los dos numeros ingresados es: "<< (n1*n2)/a<<endl;
    return 0;
}
