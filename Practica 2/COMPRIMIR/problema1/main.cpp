#include <iostream>

using namespace std;
void cambio_diniero(int *);
int main()
{
    int dinero;
    cout<<"Ingrese la cantidad de dinero: "<<endl;
    cin>>dinero;
    cambio_diniero(&dinero);
    cout<<"El resto es: "<<dinero<<endl;
    return 0;
}

void cambio_diniero(int *dinero){
    cout<<"Billetes de 50 000: "<<*dinero/50000<<endl;
    *dinero=*dinero%50000;
    cout<<"Billetes de 20 000: "<<*dinero/20000<<endl;
    *dinero=*dinero%20000;
    cout<<"Billetes de 10 000: "<<*dinero/10000<<endl;
    *dinero=*dinero%10000;
    cout<<"Billetes de 5000: "<<*dinero/5000<<endl;
    *dinero=*dinero%5000;
    cout<<"Billetes de 2000: "<<*dinero/2000<<endl;
    *dinero=*dinero%2000;
    cout<<"Billetes de 1000: "<<*dinero/1000<<endl;
    *dinero=*dinero%1000;
    cout<<"Monedas de 500: "<<*dinero/500<<endl;
    *dinero=*dinero%500;
    cout<<"Monedas de 200: "<<*dinero/500<<endl;
    *dinero=*dinero%200;
    cout<<"Monedas de 100: "<<*dinero/500<<endl;
    *dinero=*dinero%100;
    cout<<"Monedas de 50: "<<*dinero/500<<endl;
    *dinero=*dinero%50;
}
