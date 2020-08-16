#include <iostream>

using namespace std;
int factorial (int);
int main()
{
    int elementos,denominador=1;
    float acum=1;
    cout << "Ingrese el numero de elementos que desee que tenga la suma: " << endl;
    cin>>elementos;

    for (int i =1 ;i<elementos;i++) {  // Aquí es "<" y no "<=" porque al inicializar acum=1 ya estoy contando el caso "1/0!"
                                       // Lo que significa que el numero de iteraciones debe ser menor en una unidad que el
                                       // numero de elementos ingresado por el usuario.

        acum+=1.0/float(factorial(denominador)); // Utilizar forzaje, de lo contrario hará una division aproximada.
        denominador++;
    }

    cout<<"El valor aproximado de euler es: "<<acum<<endl;
    return 0;
}

int factorial (int numero){
    // Calculando el factorial de un numero a traves de recursividad.
    if(numero==1){
        return numero;
    }
    else {
        return numero*factorial(numero-1);
    }
}
