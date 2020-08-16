#include <iostream>

using namespace std;
void interseccion(int *,int *);
int main()
{
    int rectangulo1[4],rectangulo2[4];
    cout<<"Ingrese las coordenadas del rectangulo 1: "<<endl;
    cin>>rectangulo1[0]>>rectangulo1[1];
    cout<<"Ingrese el ancho y la longitud del rectangulo 1 "<<endl;
    cin>>rectangulo1[2]>>rectangulo1[3];
    cout<<"Ingrese las coordenadas del rectangulo 2: "<<endl;
    cin>>rectangulo2[0]>>rectangulo2[1];
    cout<<"Ingrese el ancho y la longitud del rectangulo 2: "<<endl;
    cin>>rectangulo2[2]>>rectangulo2[3];
    if(rectangulo1[1]<rectangulo2[1]){
        int aux = rectangulo1[1];
        rectangulo1[1]=rectangulo2[1];
        rectangulo2[1]=aux;
        aux=rectangulo1[0];
        rectangulo1[0]=rectangulo2[0];
        rectangulo2[0]=aux;
        aux=rectangulo1[2];
        rectangulo1[2]=rectangulo2[2];
        rectangulo2[2]=aux;
        aux=rectangulo1[3];
        rectangulo1[3]=rectangulo2[3];
        rectangulo2[3]=aux;
    }
    interseccion(rectangulo1,rectangulo2);

    return 0;
}

void interseccion(int * rect1,int * rect2){
    int resultante[4];
    if(rect1[0]==rect2[0] and rect1[1]==rect2[1] and rect1[2]==rect2[2] and rect1[3]==rect2[3]){
        cout<<"Los dos rectangulos ingresados son los mismos"<<endl;
    }
    else if ((rect2[0]<(rect1[0]+rect1[3])) and (rect2[1]>(rect1[1]-rect1[2])) ) {
        if(rect2[0]>=rect1[0] and rect2[1]<=rect1[1]){
            resultante[0]=rect2[0];
            resultante[1]=rect2[1];
            if((rect2[0]+rect2[3])<=(rect1[0]+rect1[3])){
                resultante[3]=rect2[3];
            }
            else {
                resultante[3]=(rect1[0]+rect1[3])-resultante[0];
            }
            if((rect2[1]-rect2[2])<=(rect1[1]-rect1[2])){
                resultante[2]=resultante[1]-(rect1[1]-rect1[2]);
            }
            else {
                resultante[2]=rect2[2];
            }
        }
        else {
            resultante[0]=rect1[0];
            resultante[1]=rect2[1];
            if((rect2[0]+rect2[3])>=(rect1[0]+rect1[3])){
                resultante[3]=rect1[3];
            }
            else {
                resultante[3]=(rect2[0]+rect2[3])-resultante[0];
            }
            if((rect2[1]-rect2[2])<=(rect1[1]-rect1[2])){
                resultante[2]=resultante[1]-(rect1[1]-rect1[2]);
            }
            else {
                resultante[2]=rect2[2];
            }
        }


        cout<<resultante[0]<<","<<resultante[1]<<","<<resultante[2]<<","<<resultante[3]<<endl;
    }
    else {
        cout<<"Los rectangulos ingresados no se intersectan"<<endl;
    }
}
