#include <algorithm>
#include <iostream>

using namespace std;

int main( )
{
  std::string cadena = "0123456789";
  long contador = 1;
  int n;

  cout<<"Ingrese el numero de la permutacion: "<<endl;
  cin>>n;

  do
  {
      if (contador == n){
          cout << "La permutacion numero " << contador << " es: " << cadena << endl;
          break;
      }
    contador += 1;
  } while ( std::next_permutation( cadena.begin( ), cadena.end( ) ) );
}
