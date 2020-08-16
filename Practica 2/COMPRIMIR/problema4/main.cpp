#include <iostream>

using namespace std;
void arreglo_a_numero(int [],int *,int);
int main()
{
    int arreglo[]={1,4,5,3,5},*p_numero,numero;
    //cout<<sizeof (arreglo)<<" "<<sizeof (arreglo[0])<<endl;
   // p_numero=&arreglo[0];
    //cout<<sizeof (*p_numero)<<endl; Imprime el tamaño del puntero, NO  del arreglo.
    p_numero=&numero;
    arreglo_a_numero(arreglo,p_numero,sizeof(arreglo)/sizeof (arreglo[0]));
    cout<<"\n"<<numero<<endl;
    return 0;
}
void arreglo_a_numero(int array [],int *numero, int digitos){

    // cout<<sizeof (array)<<" "<<sizeof (array[0])<<endl; -> Interesante dato.
    *numero=0;
    for (int i=0;i<digitos;i++) {
        *numero+=array[i];
        *numero*=10;
    }
    *numero/=10;
}

