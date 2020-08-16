#include <iostream>

using namespace std;
bool primo(int);
int main()
{   int numero,acum=0;
    cin>>numero;
    for (int i =1;i<=numero;i++) {
        if(primo (i)){
            cout<<i<<" ";
            acum+=i;
        }
    }
    cout<<endl;
    cout<<"La suma de los numeros primos menores o iguales que "<<numero<<" es: "<<acum<<endl;

    return 0;
}


bool primo (int numero){
    int contador=1;
    for (int factor = numero/2;factor>=1;factor--) {
        if(numero%factor==0){
            contador++;
        }
    }
    if(contador==2)
        return true;
    return false;
}
