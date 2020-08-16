void cambio_diniero(long *);
long dinero;
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(10000);
}
void loop (){
  	Serial.println("Ingrese la cantidad de dinero: ");
    dinero=Serial.parseInt();
	cambio_diniero(&dinero);
	Serial.println("El resto del dinero es: "+String(dinero));
}
void cambio_diniero(long *dinero){
    Serial.println("Billetes de 50000: "+String(*dinero/50000));
    *dinero=*dinero%50000;
    Serial.println("Billetes de 20000: "+String(*dinero/20000));
    *dinero=*dinero%20000;
    Serial.println("Billetes de 10000: "+String(*dinero/10000));
    *dinero=*dinero%10000;
    Serial.println("Billetes de 5000: "+String(*dinero/5000));
    *dinero=*dinero%5000;
    Serial.println("Billetes de 2000: "+String(*dinero/2000));
    *dinero=*dinero%2000;
    Serial.println("Billetes de 1000: "+String(*dinero/1000));
    *dinero=*dinero%1000;
    Serial.println("Monedas de 500: "+String(*dinero/500));
    *dinero=*dinero%500;
    Serial.println("Monedas de 200: "+String(*dinero/200));
    *dinero=*dinero%200;
    Serial.println("Monedas de 100: "+String(*dinero/100));
    *dinero=*dinero%100;
    Serial.println("Monedas de 50: "+String(*dinero/50));
    *dinero=*dinero%50;
}

