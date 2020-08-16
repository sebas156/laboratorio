#include <iostream>

using namespace std;

int main()
{
    int numero,posicion=2,cont,contador=0;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;

    while(contador != numero){
        cont=0;
        for (int divisor =1;divisor<=posicion/2;divisor ++) { // Verificando si el numero es primo.
            if(posicion%divisor==0){                          // A mi parecer un codigo bastante mediocre.
                                                              //La logica consiste en una indicador de deposicion que empieza en 2,
                                                             // verifica si el 2 es primo, como es primo, aumenta un contador (contador), luego,
                                                             //la variable posicion aumenta a 3 y verifica si es primo, como lo es, aumenta nuevamente
                 cont++;                                     // la variable "contador", luego, aumenta a 4 y como no es primo, esta vez no aumenta la
                                                             // variable contador... Asi sucesivamente hasta que la variables contador sea igual
                                                             // al numero ingresado por el usuario.
            }
        }
        cont++;
        if(cont==2){
            cout<<posicion<<" ";
            contador++;
        }
        posicion++;
    }
    cout<<endl;
    return 0;
}
