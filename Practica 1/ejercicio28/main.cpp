#include <iostream>

using namespace std;

int main()
{
    int elementos;
    float acumulador=0,denominador=1,signo=1,aux;
    cout << "Ingrese el numero de elementos: " << endl;
    cin>>elementos;

    for (int i=1;i<=elementos;i++) {
        aux=(1/denominador)*signo;
        acumulador+=aux;// acumulador+=(1/denominador)*signo; -> cuando signo es igual a -1 No decrementa el valor de acumulador.
        denominador+=2;// En realidad el problema radicaba en que todas la variable solo habia declarado como int cuando deberian ser float.
        signo*=-1;
    }
    acumulador*=4;

    cout<<"La aproximacion de pi es: "<<acumulador<<endl;
    return 0;
}
