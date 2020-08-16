#include "funciones.h"
#include "router.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    RedPermanente SistemaArtificial;
    char opcion;
    do{
        opcion=MenuPrincipal();
        switch (opcion) {
        case 'A':{
            string nombre;
            do{
                cout<<"Ingrese el nombre del enrutador que desea agregar: "<<endl;
               cin>>nombre;
                if( !SistemaArtificial.VerificarRouter(nombre))
                    cout<<"Cada enrutador debe tener un nombre unico. "<<endl;
            }while(!SistemaArtificial.VerificarRouter(nombre));
            router auxiliar(nombre);
            AgregarElementoActualizar(SistemaArtificial,auxiliar);
            break;
        }
        case 'B': {
            string nombre;
            do{
                cout<<"Ingrese el nombre del enrutador que desea eliminar: "<<endl;
               cin>>nombre;
                if( SistemaArtificial.VerificarRouter(nombre))
                    cout<<"El nombre ingresado no corresponde a algun router en nuestro sistema. "<<endl;
            }while(SistemaArtificial.VerificarRouter(nombre));

            EliminarElementoActualizar(SistemaArtificial,nombre);
            SistemaArtificial.BuscarCaminoMasRapido();
            break;
        }
       case 'C':{
            string enrutador1,enrutador2;
            do{
                cout<<"Ingrese el nombre del enrutador inicial: "<<endl;
                cin>>enrutador1;
            }while(SistemaArtificial.VerificarRouter(enrutador1)==true);

            do{
                cout<<"Ingrese el nombre del enrutador destino: "<<endl;
                cin>>enrutador2;
            }while(SistemaArtificial.VerificarRouter(enrutador2)==true or enrutador1== enrutador2);

            SistemaArtificial.AgregarRelacion(enrutador1,enrutador2);
            SistemaArtificial.BuscarCaminoMasRapido();

            break;
        }
        case 'D':{
            string enrutador1,enrutador2;
            do{
                cout<<"Ingrese el nombre del enrutador inicial: "<<endl;
                cin>>enrutador1;
            }while(SistemaArtificial.VerificarRouter(enrutador1)==true);

            do{
                cout<<"Ingrese el nombre del enrutador destino: "<<endl;
                cin>>enrutador2;
            }while(SistemaArtificial.VerificarRouter(enrutador2)==true or enrutador1== enrutador2);
            SistemaArtificial.ObtenerRuta(enrutador1,enrutador2);
            break;
        }

       case 'E':{
            string enrutador1,enrutador2;
            do{
                cout<<"Ingrese el nombre del enrutador inicial: "<<endl;
                cin>>enrutador1;
            }while(SistemaArtificial.VerificarRouter(enrutador1)==true);

            do{
                cout<<"Ingrese el nombre del enrutador destino: "<<endl;
                cin>>enrutador2;
            }while(SistemaArtificial.VerificarRouter(enrutador2)==true or enrutador1== enrutador2);
            SistemaArtificial.ObtenerCosto(enrutador1,enrutador2);
        break;
        }
      case 'F':{
            string nombre;
            do{
                cout<<"Ingrese el nombre del enrutador: "<<endl;
               cin>>nombre;
                if( SistemaArtificial.VerificarRouter(nombre)==true)
                    cout<<"No se tiene registro de ese enrutador "<<endl;
            }while(SistemaArtificial.VerificarRouter(nombre)==true);
            ObtenerTablaEnrutamiento(SistemaArtificial,nombre);
            break;
        }

      case 'H':{
            string enrutador1,enrutador2;
            do{
                cout<<"Ingrese el nombre del enrutador inicial: "<<endl;
                cin>>enrutador1;
            }while(SistemaArtificial.VerificarRouter(enrutador1)==true);

            do{
                cout<<"Ingrese el nombre del enrutador destino: "<<endl;
                cin>>enrutador2;
            }while(SistemaArtificial.VerificarRouter(enrutador2)==true or enrutador1== enrutador2);

            SistemaArtificial.CambiarRelacion(enrutador1,enrutador2);
            SistemaArtificial.BuscarCaminoMasRapido();
        break;
        }
    case 'I':{
            SistemaArtificial.Limpiar(); //Si yo voy a cargar una red desde un archivo, pero previo a eso la red ya posee algunos elementos
          CargarArchivo(SistemaArtificial); // Estos elementos se van a borrar.
          SistemaArtificial.BuscarCaminoMasRapido();
          break;
        }
    case 'J':{
            SistemaArtificial.Limpiar();   //Si voy a generar una red aleatoria, pero previo a marcar esta opcion la red ya posee algunos elementos
            GenerarRedAleatoria(SistemaArtificial); // Estos elementos se van a borrar.
             SistemaArtificial.BuscarCaminoMasRapido();
            break;
        }
    case 'K':{
            SistemaArtificial.ObservarTopologia();
            break;
        }
    case 'M':{
        cout<<"Merecedor de un 5.0 este programa, no? jaja "<<endl;
        break;
        }
        default:
            cout<<"La opcion no se reconoce. "<<endl;
            break;

        }
    }while(opcion!='M');
    return 0;
}
