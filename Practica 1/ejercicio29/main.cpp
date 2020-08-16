#include <iostream>

using namespace std;

int main()
{
    int mayor=100,menor=0,resultado,intentos=0;
    char indicativo;
    cout << "BIENVENIDO AL JUEGO DE LUCIFER." << endl;
    cout << "Este juego consiste en que tu deberas pensar un numero entre 0 y 100 y la maquina tratara de adivinarlo." << endl;
    do
    {
        intentos+=1;
        resultado=(mayor+menor)/2;
        cout<<"La maquina piensa que el numero que pensaste es el: "<<resultado<<endl;
        cout<<"Tu numero es mayor? Ingresa (>).\nTu numero es menor? Ingresa (<).\nEs tu numero? Ingresa (=)"<<endl;
        cin>>indicativo;
        if(indicativo=='>')
        {
            menor=resultado;
        }
        else if (indicativo=='<')
        {
            mayor=resultado;
        }
        else if (indicativo == '=')
        {
            cout<<"En tan solo "<<intentos<<" intentos la maquina ha logrado adivinar tu numero."<<endl;
            cout<<"Eso desmuestra que las maquinas superan a los humanos."<<endl;
        }
        else
        {
           cout<<"Oye, lo sentimos pero ingresaste un caracter no especificado."<<endl;
        }
    }while(indicativo != '=');
    return 0;
}
