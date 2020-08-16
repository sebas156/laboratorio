#include <iostream>

using namespace std;

int main()
{
    char caracter;
    cout << "Ingrese un caracter: " << endl;
    cin>>caracter;
    if((caracter==65)||(caracter==97)||(caracter==69)||(caracter==101)||(caracter==73)||(caracter==105)||(caracter==79)||(caracter==111)||(caracter==85)||(caracter==117))
    {
        cout<<"El caracter ingresado es una vocal"<<endl;
    }
    else if (((caracter>=65)&&(caracter<=90))||((caracter>=97)&&(caracter<=122)))
    {
        cout<<"El caracter ingresado es una consonante."<<endl;
    }
    else if ((caracter>=48)&&(caracter<=57))
    {
        cout<<"El caracter ingresado es un numero."<<endl;
    }
    else {
        cout<<"CARACTER ESPECIAL."<<endl;
    }
    return 0;
}
