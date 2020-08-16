#include <iostream>

using namespace std;

int main()
{
    int dimension;
    cout << "Ingrese las dimensiones del cuadrado: " << endl;
    cin>>dimension;

    for (int f=1;f<=dimension;f++)
    {
        for (int c = 1;c<=dimension;c++)
        {
            if(((f !=1)&&(f!=dimension))&&(((c!=1)&&(c!=dimension))))
            {
              cout<<" ";
            }
            else {
                if(c==dimension)
                {
                    cout<<"+"<<endl;
                }
                else {
                    cout<<"+";
                }
            }
        }
    }
    return 0;
}
