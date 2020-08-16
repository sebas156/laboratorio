#include <iostream>
#include <string.h>
using namespace std;
void minusculas_a_mayusculas(char *,int);
int main()
{
    char palabra[]="asdfghjjhgfdSA";
    cout<<"Original: ";
    for (int i = 0;i < strlen(palabra);i++) {
        cout<<palabra[i];
    }
    cout<<endl;
    minusculas_a_mayusculas(palabra,strlen(palabra));
    cout<<"\nModificado: ";
    for (int i = 0;i < strlen(palabra);i++) {
        cout<<palabra[i];
    }
    cout<<endl;
    return 0;
}
void minusculas_a_mayusculas(char *p_frase, int tamanio){
    for (int posicion=0;posicion<tamanio;posicion++) {
        if(97<=(*(p_frase+posicion)) and (*(p_frase+posicion))<=122 ) // Prestar atencion.
            (*(p_frase+posicion))-=32;
    }
}
