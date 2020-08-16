#include <iostream>

using namespace std;

int main()
{
    int tamano,asterisco,espacios;
    do
    {
    cout <<"Ingrese un numero impar: "<< endl;
    cin>>tamano;
    }while(tamano%2==0);
    asterisco=1;
    espacios=tamano/2;
    for (int i = 1;i <= tamano;i++) {
        for (int e =1;e<=espacios;e++) {
            cout<<" ";
        }
        for (int a =1;a<=asterisco;a++) {
            cout<<"*";
        }
        for (int e =1;e<=espacios;e++) {
            cout<<" ";
        }
        if(i <= tamano/2)
        {
            asterisco+=2;
            espacios-=1;
        }
        else {
            asterisco-=2;
            espacios++;
        }
        cout<<endl;
    }

    return 0;
}
