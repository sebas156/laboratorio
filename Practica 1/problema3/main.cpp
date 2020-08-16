
#include <iostream>

using namespace std;

bool validacion(int,int,int);
int bisiesto (int);
int main()
{
    int dia_a,mes_a,ano_a;

     cout<<"Ingrese una fecha: "<<endl;
     cout<<"Dia: "; cin>>dia_a;
     cout<<"Mes: "; cin>>mes_a;
     cout<<"Ano: "; cin>>ano_a;

     if(validacion(dia_a,mes_a,ano_a)){
            cout<<"La fecha ingresada es VALIDA"<<endl;
     }
     else{
            cout<<"La fecha ingresada es INVALIDA"<<endl;
     }
    cout<<endl;

    return 0;
}


bool validacion(int dia,int mes,int ano)
{
    if(dia < 1 or dia > 31 or mes < 1 or mes > 12 or ano < 1) // Interesante punto de vista! Tener en cuenta.
    {
        return false;
    }

    switch (mes) { // Curiosa forma de utilizar el swicth... Tener en cuenta.
    case (4):
    case (6):
    case (9):
    case (11):
        if ( dia > 30){
            return false;
        }
        break;
    case (2):
        if(bisiesto(ano)){
            if(dia>29){
                return false;
            }
        }
        else if (dia >28){
            return false;
        }
        break;

    }
    return true;
}

int bisiesto (int ano){
    if (ano % 4 == 0 and ano%100 !=0)
        return 1;
    else if (ano%400==0) {
        return 1;
    }
    else {
        return 0;
    }
}



