    #include <iostream>
#include <string.h>
#include <stdlib.h> // Funciona new y delete

using namespace std;
void imprimir(char *, int *);
void eliminar_numeros(char *, int *);
int contar_numeros(char *, int *);
void llenar_arreglo_numeros(char *,char *, int *);
int main()
{
    char original[]="abc5434r6ct",*puntero_numeros;
    int magnitud = strlen(original), numeros;
    numeros=contar_numeros(original,&magnitud);
    puntero_numeros= new char[numeros];
    llenar_arreglo_numeros(original,puntero_numeros,&magnitud);
    eliminar_numeros(original,&magnitud);
    imprimir(original,&magnitud);
    imprimir(puntero_numeros,&numeros);
    delete [] puntero_numeros;
    cout << "Hello World!" << endl;
    return 0;
}

// char arreglo []="shjsdhfj";
// char arreglo2[]=arreglo??
void imprimir(char *modificada, int *tamanio){
    for (int i=0;i<*tamanio;i++) {
        cout<<*(modificada+i);
    }
    cout<<endl;
}

int contar_numeros(char * arreglo, int *tamanio){
    int cont=0;
    for (int i=0;i<*tamanio;i++) {
        if(*(arreglo+i)<=57 and *(arreglo+i)>=48)
            cont++;
    }
    return cont;
}

void eliminar_numeros(char *p_frase,int *tamanio){
    char aux;
    for (int apuntador=0;apuntador<(*tamanio);apuntador++) { //        
    if(48<=*(p_frase+apuntador) and *(p_frase+apuntador)<=57){                                //
        for (int aux_eliminar= apuntador;aux_eliminar<(*tamanio);aux_eliminar++) { //
            aux=*(p_frase+aux_eliminar);
            *(p_frase+aux_eliminar)=*(p_frase+aux_eliminar+1);
            *(p_frase+aux_eliminar+1)=aux;
        }
        *(tamanio)-=1;
        if(48<=*(p_frase+apuntador) and *(p_frase+apuntador)<=57)
            apuntador--;
    }
}
}

void llenar_arreglo_numeros(char *arreglo1,char *arreglo2, int *tamanio1){
    int posicion2=0;
    for (int posicion1=0;posicion1<*tamanio1;posicion1++) {
        if(*(arreglo1+posicion1)<=57 and *(arreglo1+posicion1)>=48){
            *(arreglo2+posicion2)=*(arreglo1+posicion1);
            posicion2++;
        }
    }
}
