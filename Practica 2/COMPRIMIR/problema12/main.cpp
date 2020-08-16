#include <iostream>

using namespace std;
bool verificar(int **,int,int);
int main()
{
    int ** matriz;
    int dimension,referencia=0;
    cout << "Ingrese la dimension de la matriz: " << endl;
    cin>>dimension;
    matriz= new int *[dimension];
    for (int i=0;i<dimension;i++) {
        matriz[i]=new int[dimension];
    }
    for (int filas=0;filas<dimension;filas++) {
        for (int columnas=0;columnas<dimension;columnas++) {
            cout<<"Ingrese el elemento de la posicion ["<<filas+1<<"] ["<<columnas+1<<"] : "<<endl;
            cin>>*(*(matriz+filas)+columnas);
            referencia+=*(*(matriz+filas)+columnas);
        }
    }
    referencia/=dimension;

    if(verificar(matriz,dimension,referencia))
        cout<<"El cuadrado ingresado es un CUADRADO MAGICO"<<endl;
    else
        cout<<"El cuadrado ingresado NO es un CUADRADO MAGICO"<<endl;

    for (int i=0;i<dimension;i++) {
        delete [] matriz[i];
    }

    delete [] matriz;
    return 0;
}

bool verificar (int ** cuadrado_magico,int tamanio,int referencia){
  int *p_filas,*p_columnas,filas,columnas,acum=0;
  bool flag=true;
  p_filas=&filas;
  p_columnas=&columnas;
  for (int i=1;i<=2;i++) {
      for (filas=0;filas<tamanio;filas++) {
          for (columnas=0;columnas<tamanio;columnas++) {
              acum+=*(*(cuadrado_magico+*(p_filas))+*(p_columnas));
          }
          if(acum!=referencia){
              flag=false;
              break;
          }
          acum=0;
      }
      if(flag==false)
          break;
      p_filas=&columnas;
      p_columnas=&filas;
  }

  if(flag != false){
      for (filas =0; filas < tamanio;filas++) {
          acum+=*(*(cuadrado_magico+filas)+filas);
      }
      if(acum!=referencia)
          flag=false;
      acum=0;
      for (filas=0;filas<tamanio;filas++) {
          acum+=*(*(cuadrado_magico+filas)+(tamanio-1-filas));
      }
      if(acum!=referencia)
          flag=false;
  }

  return flag;
}
