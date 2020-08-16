#ifndef ROUTER_H
#define ROUTER_H
#include <map>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class router
{
private:
    map<string,map<string,int>> CostosTopologia; //Si yo tengo los costos de cada enlace, tambien tengo la topología de la red.
    map<string,map<int,vector<string>>> RutaMenosCostosa; //Con el mismo como fuente.

public:
    map<string,map<string,int>> * GetCostosTopologia();
    map<string,map<int,vector<string>>>* GetRutaMenosCostosa();
    string NombreEnrutador;
    void SetEncontrarRutaMasCorta(); //Con el mismo como fuente.
    void AgregarEnrutador(string,map<string,int>); // Con esta funcion agrego un nuevo elemento a CostosTopologia que es la topologia del sistema... Cada enrutador tiene exactamente la misma informaciion.
    void EliminarEnrutador(string);
    void ActualizarCostosEnlaces();
    void AgregarEnlace(string,string,int);
    bool verificarAgregarEnlace(string);
    bool VerificarPosibleRuta(string);
    void ImprimirTopologia();
    router(string);
};

class RedPermanente
{
private:
    map<string,router> RedArtificial;
public:
    void CargarInformacionAnuevoRouter(router&);
    void setAgregarRouter(string,router);
    void EliminarRouter(string);
    bool VerificarRouter(string);
    void AgregarRelacion(string&,string&);
    void AgregarRelacionAutomatico(string&,string&,int);
    bool VerificarRelacionAutomaticoGenerarRED(string&,string&);
    void CambiarRelacion(string&,string&);
    void BuscarCaminoMasRapido();
    void ObtenerRuta(string,string);
    void ObtenerCosto(string,string);
    map<string,router> GetRedArtificial();
    void Limpiar();
    void ObservarTopologia();
    RedPermanente();
};

#endif // ROUTER_H
