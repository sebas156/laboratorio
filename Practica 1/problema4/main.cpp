#include <iostream>

using namespace std;

int main()
{
    int hora,transcurrido,minutoshora,minutostranscurrido;
   do
    {
        cout << "Ingrese la hora del dia: " << endl;
        cin>>hora;
    }while(hora < 0 or hora > 2400 or hora%100 > 59);
    do
    {
        cout << "Ingrese el timepo transcurrido: " << endl;
        cin>>transcurrido;
    }while(transcurrido<0 or transcurrido > 2400 or transcurrido%100 > 59);
    minutoshora=hora%100;
    minutostranscurrido=transcurrido%100;
    hora-=minutoshora;
    transcurrido-=minutostranscurrido;
    if(!((hora + transcurrido)<=2400))
    {
        hora-=2400;
    }

    if((minutoshora + minutostranscurrido)<=59)
    {
        cout<<"La hora es: "<<hora+transcurrido+minutoshora+minutostranscurrido<<endl;
    }
    else {
        cout<<"La hora es: "<<hora+transcurrido+minutoshora+minutostranscurrido+40<<endl;
    }
    return 0;
}
