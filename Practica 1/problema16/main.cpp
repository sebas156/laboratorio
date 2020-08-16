#include <iostream>

using namespace std;
int numero_elementos(int);
void imprimir(int);
int main()
{
    int numero,mayor=1,semillajota;
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    for (int semilla = 2;semilla<numero;semilla++) {
        if(numero_elementos(semilla)>mayor){

            mayor=numero_elementos(semilla);
            semillajota=semilla;
        }
    }

    cout<<"La serie mas larga es con la semilla "<<semillajota<<", con "<<mayor<<" terminos."<<endl;
    imprimir(semillajota);


    return 0;
}
void imprimir(int semilla){
    while (semilla !=1) {
        cout<<semilla<<" ";
        if(semilla%2==0){
            semilla/=2;
        }
        else {
            semilla=semilla*3+1;
        }
    }
    cout<<endl;
}
int numero_elementos(int valor){
    int contador=0;
    while (valor != 1) {
        contador++;
        if(valor%2==0){
            valor/=2;
        }
        else {
            valor=valor*3+1;
        }
    }
    return contador;
}
