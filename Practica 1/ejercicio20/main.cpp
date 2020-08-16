#include <iostream>

using namespace std;

int main()
{
    int numero,contador=0,copia,aux,*invertido;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    copia=numero;        //variable copia la voy a usar para hallar el numero de digitos.
    aux=numero;          // Variable aux la utiliza al final.
    invertido=&copia;

    while(copia>0)
    {                    // Contar el numero de de digitos del numero ingresado.
        copia=copia/10;
        contador++;
    }                   // Ahora el apuntador apunta a una variable que es igual a cero.

    for (int i = 1;i<=contador;i++) {
        *invertido+=numero%10;
        *invertido*=10;
        numero/=10;
    }
    *invertido/=10;
    if(*invertido==aux)
    {
        cout<<"El numero es palindromo"<<endl;
    }
    else {
        cout<<"El numero NO es palindromo"<<endl;
    }

    return 0;
}
