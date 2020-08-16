
#include <LiquidCrystal.h>
int devolver_numero(char);
int transformar (char*);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Programar me");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("ENCANTA <3");
  delay(3000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  char EnRomano[]="DCLXVI";
  lcd.print(EnRomano);
  lcd.setCursor(0, 1);
  lcd.print(String(transformar(EnRomano)));
  delay(20000);
}
 

int devolver_numero(char letra){

    char letras[]="CDILMVX",*aux;
    int equivalencias[]={100,500,1,50,1000,5,10};
    aux=strchr(letras,letra);
    return equivalencias[aux-letras];

}

int transformar(char *romano){
    int cont=0;
    for (int i=0;*(romano+i)!='\0';i++) {
        if(devolver_numero(*(romano+i))<devolver_numero(*(romano+i+1)))
            cont-=devolver_numero(*(romano+i));
        else
            cont+=devolver_numero(*(romano+i));
    }
    return cont;
}