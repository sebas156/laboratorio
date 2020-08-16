#include <LiquidCrystal.h>
#include <Keypad.h>
// Variables LCD
LiquidCrystal lcd(13,12,11,10,9,8);
//

// Variables teclado matricial
const byte rows = 4; //four rows
const byte cols = 4; //three columns
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[rows] = {7,6,5,4}; //connect to the row pinouts of the keypad
byte colPins[cols] = {3,2,1,0}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );

char numero[20];
int  factorial(int); 
int dimension, caminos;
void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.print("Ingrese n: ");
  lcd.setCursor(0, 1);
  dimension = keypad.waitForKey();
  dimension-=48;
  caminos=factorial (dimension);
  sprintf(numero,"R(%d)=%d          ",dimension,caminos);
  lcd.print(numero);
 
}

int factorial (int numero){
  int contador=0, resultado=1,int copia=numero, auxiliar=0;   
  for(int i=numero+1;i<=numero*2;i++)
      contador++;

 int * numerador= new int [contador];
int * denominador=new int [numero];

for(int i=0;i<contador;i++){
  numerador[i]=++numero;
}
for(int i=0;i<copia;i++){
  denominador[i]=i+1;
}

for(int fila=0;fila<contador;fila++){
  for(int columna=auxiliar;columna<copia;columna++){
    if(primo(numerador[fila])==true){
       resultado*=numerador[fila];
       break; 
    }
    else if(numerador[fila]%denominador[columna]==0){
       resultado*=numerador[fila]/denominador[columna];
       auxiliar++;   
    }
    else if(numerador[fila]%denominador[columna]!=0){
      auxiliar--;
    }
  }
  
}
resultado/=2;
  delete [] numerador;
  delete [] denomidador;
return resultado;
}


bool primo(int primo){
  int contador=0;
  for(int divisor=1<=numero/2;divisor++){
    if(numero%divisor==0)
      contador++;
  }
  contador++;
  
  if(contador == 2)
    return true
  else
    return false
}
