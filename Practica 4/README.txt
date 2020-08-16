El archivo que contiene la red se encuentra en la carpeta build

Dentro de este arhivo se en cuentra la siguiente informacion: 

Nombre de todos los enrutadores que hay en la red: 
A
B
C
D
E
F
La siguiente notacion expresa que el router A tiene una conexion con el F y esta conexion tiene un costo de 3
A+F=3
La siguiente notacion expresa que el router F tiene una conexion con el E y esta conexion tiene un costo de 2
F+E=2
Asi sucesivamente:
E+B=4
B+D=1
B+A=5
A+C=2

Si se va a escribir una red dentro del archivo que el programa va a leer, se debe garantizar que esta red no presente incongruencias:
- Costos de enlaces negativos.
- Routers con nombres repetidos
-Un enlace hacia sí mismo. ejemplo F+F=3;
- Que se repita un una conexion:
  ejemplo:
	A+D=4
	Y despues
	D+A=5

