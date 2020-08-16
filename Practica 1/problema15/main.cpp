#include <iostream>

using namespace std;

int main()
{
    int aum=2,acum=1,dimension;
    do{
        cout << "Por favor, ingrese un numero impar: " << endl;
        cin>>dimension;
    }while(dimension%2==0);

    for (int i =3;i<=dimension*dimension;i+=aum) {
        acum+=i;
        for (int miniciclo=1;miniciclo<=3;miniciclo++) {
            i+=aum;
            acum+=i;
        }
        aum+=2;
    }

   /* for (int i = dimension*dimension-(dimension-1);i<=dimension*dimension;i++) {
    cout<<i<<" ";
    }
    cout<<endl;
    cout<<dimension*(dimension-1)<<" ";
    for (int i = (dimension-2)*(dimension-3)+1;i<=(dimension-2)*(dimension-2);i++) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<dimension*(dimension-1)-1<<" ";
    cout<<(dimension-2)*(dimension-3)<<" ";
    for (int i = (dimension -4)*(dimension-5)+1;i<=(dimension-4)*(dimension-4);i++) {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"En una espiral de "<<dimension<<"x"<<dimension<<" la suma de sus diagonales es: "<<acum<<endl;*/

    return 0;
}
