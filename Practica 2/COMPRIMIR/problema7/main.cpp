#include <iostream>
#include <string.h>
using namespace std;
void eliminar(char *,int *);
void imprimir(char [], int);
int main()
{
    char frase[]="vaaansooncuuuchh";
    int magnitud=strlen(frase);
    cout<<magnitud<<endl;
    for (int i=0;i<=magnitud;i++) { // El caracter NULO NO se imprime. Pero se puede llegar hasta él.
        cout<<frase[i];
    }
    cout<<endl;
    imprimir (frase,magnitud);
    eliminar(frase,&magnitud);
    imprimir(frase,magnitud);

    return 0;
}
void eliminar(char *p_frase,int *tamanio){             //Algoritmo para eliminar. NOTA: IMPORTANTISIMO... PARENTESIS
    for (int apuntador=0;apuntador<(*tamanio);apuntador++) { // A la hora de  manejar punteros a arreglos.
        for (int apunt_soporte=apuntador+1;apunt_soporte<(*tamanio);apunt_soporte++) {
            if(*(p_frase+apunt_soporte)==*(p_frase+apuntador)){                                // Esquema representativo.
                for (int aux_eliminar= apunt_soporte;aux_eliminar<(*tamanio);aux_eliminar++) { // posicion[actual]=posicion[actual+1]
                    *(p_frase+aux_eliminar)=*(p_frase+aux_eliminar+1);
                }
                (*tamanio)--;
                if(*(p_frase+apunt_soporte)==*(p_frase+apuntador))
                    apunt_soporte--;
            }
        }
    }
}

void imprimir (char arreglo [], int tamanio){
    for (int i=0;i<tamanio;i++) {
        cout<<arreglo[i];
    }
    cout<<endl;
}
