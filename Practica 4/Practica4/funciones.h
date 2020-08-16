#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include "router.h"


using namespace std;

char MenuPrincipal();
void AgregarElementoActualizar(RedPermanente& , router );
void EliminarElementoActualizar(RedPermanente&, string);
void RutaMasCortaRecursividad(vector<string> &, string,string, map<string,map<string,string>> & ,string);
vector<string> RutaMasEficiente(map<string,map<string,string>>, string,string);
void ObtenerTablaEnrutamiento(RedPermanente&,string);
void CargarArchivo(RedPermanente&);
void GenerarRedAleatoria(RedPermanente&);
#endif // FUNCIONES_H
