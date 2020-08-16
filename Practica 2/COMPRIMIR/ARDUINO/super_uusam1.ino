

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  int resistencia = analogRead(A0);
  int valor_modificado=map(resistencia,0,1023,0,255); // Modificar escala
  analogWrite(3,valor_modificado);
  Serial.println("El valor leido por analogRead() es: "+ String(resistencia));
  Serial.println("El valor modicado es: "+ String (valor_modificado));
}