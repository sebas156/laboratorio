#include <iostream>
#include <string.h>

using namespace std;
bool comparar(char [], char[]);
int main()
{
    char palabra1[]="Hola mundo";
    char palabra2[]="Hola munda";
    if(comparar(palabra1,palabra2)==false){
        cout<<"Las cadenas NO son iguales"<<endl;
    }
    else {
        cout<<"Las cadenas SON iguales"<<endl;
    }
    return 0;
}

bool comparar(char cadena1[], char cadena2[]){
    bool flag=false;
    if(strlen(cadena1)==strlen(cadena2)){          // Comparamos las longitudes de las cadenas.
        for (int i=0;i<strlen(cadena1);i++) {
            if(cadena1[i]!=cadena2[i]){            // comparamos cada caracter del arreglo.
                flag=false;
                break;
            }
            flag=true;
        }
    }
    return flag;
}
