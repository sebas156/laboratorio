#include <iostream>

using namespace std;

int main()
{
    int a,b,c; // Inicializando los numeros a,b y c
    int aux,acum=0;
    cout << "Ingrese tres numeros: " << endl;
    cin>>a>>b>>c;
    if(a<c and b<c){
        for (int i=1;i*a<c;i++) {
            acum+=i*a;
            cout<<i*a<<" ";
        }
        cout<<endl;
        for (int i=1;i*b<c;i++) {
            if(i*b%a!=0){
                acum+=i*b;
                cout<<i*b<<" ";
            }
        }
        cout<<endl;
        cout<<"La suma de los multiplos de "<<a<<" y "<<b<<" es: "<<acum<<endl;
    }
    else {
        cout<<a<<" "<<b<<endl;
        cout<<"Gracias por preferirnos."<<endl;
    }
    return 0;
}
