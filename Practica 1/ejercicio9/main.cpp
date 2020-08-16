#include <iostream>

using namespace std;

int main()
{
    float radio,area,perimetro;
    cout << "Ingrese el radio del circulo: " << endl;
    cin>>radio;
    area=3.1416*radio*radio;
    perimetro=2*3.1416*radio;
    cout<<"El area del circulo es: "<<area<<endl;
    cout<<"El perimetro del circulo es: "<<perimetro<<endl;
    return 0;
}
