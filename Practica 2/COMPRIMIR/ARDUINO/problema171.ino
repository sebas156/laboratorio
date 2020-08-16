int suma (int);
int suma_divisores(int);
char array[60];
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(10000);
}

void loop()
{
  int limite;
  Serial.println("Ingrese el numero limite: ");
  limite=Serial.parseInt();
	sprintf(array,"La suma de todos los numeros amigablels menores que %d es %d",limite,suma(limite));
	Serial.println(array);
}

int suma_divisores(int numero){
    int acum=0;
    for (int divisor=1;divisor<=numero/2; divisor++) {
        if(numero%divisor==0)
            acum+=divisor;
    }
    return acum;
}

int suma (int limite){
    int acum=0, otronumero;

    for (int numero1 = 220;numero1<limite;numero1++) {
        otronumero=suma_divisores(numero1);
        if(numero1==suma_divisores(otronumero) and numero1 != otronumero)
            acum+=numero1;
    }
    return  acum;
}