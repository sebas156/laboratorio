#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int apariciones[26];
    char letras[200],letra=64;
    for (int i=0;i<25;i++) {
        apariciones[i]=0;
    }
    for (int i= 0;i<200;i++) {
        letras[i]= 65 + rand() % (91 - 65);
        apariciones[letras[i]-65]++;
        cout<<letras[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<26;i++) {
        letra++;
        cout<<letra<<": "<<apariciones[i]<<endl;
    }
    return 0;
}
