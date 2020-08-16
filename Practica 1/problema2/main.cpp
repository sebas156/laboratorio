#include <iostream>

using namespace std;

int main()
{
    int dinero;
    cout << "Ingrese la cantidad de dinero: " << endl;
    cin>>dinero;
    cout<<"50000 : "<<dinero/50000<<endl;
    dinero=dinero%50000;
    cout<<"20000 : "<<dinero/20000<<endl;
    dinero=dinero%20000;
    cout<<"10000 : "<<dinero/10000<<endl;
    dinero=dinero%10000;
    cout<<"5000 : "<<dinero/5000<<endl;
    dinero=dinero%5000;
    cout<<"2000 : "<<dinero/2000<<endl;
    dinero=dinero%2000;
    cout<<"1000 : "<<dinero/1000<<endl;
    dinero=dinero%1000;
    cout<<"500 : "<<dinero/500<<endl;
    dinero=dinero%500;
    cout<<"200 : "<<dinero/200<<endl;
    dinero=dinero%200;
    cout<<"100 : "<<dinero/100<<endl;
    dinero=dinero%100;
    cout<<"50 : "<<dinero/50<<endl;
    dinero=dinero%50;
    cout<<"Resto: "<<dinero<<endl;

    return 0;
}
