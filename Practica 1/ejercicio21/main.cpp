#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout << "Ingrese un caracter: " << endl;
    cin>>letra;
    cout<<endl;
    if((letra>=65)&&(letra<=90))
    {
        letra+=32;
        cout<<letra<<endl;
    }
    else if ((letra>=97)&&(letra<=122)) {
        letra-=32;
        cout<<letra<<endl;
    }
    else {
        cout<<letra<<endl;
    }
    return 0;
}
