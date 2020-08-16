#include <string.h>
void minusculas_a_mayusculas(char *,int);
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   char palabra[]="Manza-na";
   Serial.print("Original: ");
    for (int i = 0;i < strlen(palabra);i++) {
        Serial.print(palabra[i]);
    }
    Serial.println(" ");
    minusculas_a_mayusculas(palabra,strlen(palabra));
    Serial.print("\nModificado: ");
    for (int i = 0;i < strlen(palabra);i++) {
        Serial.print(palabra[i]);
    }
    Serial.println(" ");
	delay(10000);
    Serial.println(" ");
}


void minusculas_a_mayusculas(char *p_frase, int tamanio){
    for (int posicion=0;posicion<tamanio;posicion++) {
        if(97<=(*(p_frase+posicion)) and (*(p_frase+posicion))<=122 ) // Prestar atencion.
            (*(p_frase+posicion))-=32;
    }
}