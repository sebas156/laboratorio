#include <iostream>

using namespace std;
bool primo(int);
int main()
{
    int numero,mayor=1;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    for (int factor = numero/2;factor>=1;factor--) {
        if(numero%factor==0 and primo(factor)){
            if(factor>mayor)
                mayor=factor;
        }

    }

    if(mayor!=1){
        cout<<"El factor primo mas grande de "<<numero<<" es: "<<mayor<<endl;
    }
    else {
        cout<<"El nummero ingresado no tiene factores primos."<<endl;
    }
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
