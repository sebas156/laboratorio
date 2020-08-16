#include <iostream>
#include <string.h>
using namespace std;

int devolver_numero(char);
int transformar (char*);
int main()
{
    char EnRomano[]="XXI";
    cout<<"La quevilancia de "<<EnRomano<<" en arabigo es: "<<transformar(EnRomano)<<endl;
    return 0;
}

int devolver_numero(char letra){

    char letras[]="CDILMVX",*aux;
    int equivalencias[]={100,500,1,50,1000,5,10};
    aux=strchr(letras,letra);
    return equivalencias[aux-letras];

}

int transformar(char *romano){
    int cont=0;
    for (int i=0;*(romano+i)!='\0';i++) {
        if(devolver_numero(*(romano+i))<devolver_numero(*(romano+i+1)))
            cont-=devolver_numero(*(romano+i));
        else
            cont+=devolver_numero(*(romano+i));
    }
    return cont;
}
