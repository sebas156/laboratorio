#include <iostream>

using namespace std;

int main()
{
    float numero1,numero2,resultado;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>numero1>>numero2;
    resultado=numero1/numero2;

    if(resultado-((int)numero1/(int)numero2)>=0.5)
    {
        resultado=((int)numero1/(int)numero2)+1;
       cout<<resultado<<endl;
    }
    else {
        resultado=((int)numero1/(int)numero2);
       cout<<resultado<<endl;
    }
    return 0;
}
