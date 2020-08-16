#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int usuario,maquina,contador=0;
    srand(time(NULL));
    maquina= 0 + rand() % (101);
    cout << "La maquina ha pensado un numero. Debes tratar de adivinarlo. " << endl;
    do
    {
        cout<<"Por favor, ingresa un numero: "<<endl;
        cin>>usuario;

        if(usuario<maquina)
        {
            cout<<"El numero que la maquina penso es mayor que el que tu ingresaste"<<endl;
        }
        else if (usuario>maquina)
        {
            cout<<"El numero que la maquina penso es menor que el que tu ingresaste"<<endl;
        }
        else
        {
            cout<<"Eres muy lento, te has tardado "<<contador<<" intentos en adivinarlo."<<endl;
        }
        contador+=1;

    }while(usuario!=maquina);
    return 0;
}
