/*
¿Qué ocurriría en cada versión si el cajero ingresa -1 como primer producto, es decir, sin haber
ingresado ningún producto? ¿Ambas estructuras se comportan igual? 
-En ambos casos el resultado final es el mismo (TOTAL A PAGAR $0), pero las estructuras no se comportan igual. Con while, el ciclo no se ejecuta si se ingresa -1 al inicio.
 En cambio, con do while, el ciclo se ejecuta al menos una vez, pero debido a una validación interna no se procesan datos inválidos.

¿Qué diferencia encontraron entre usar while y do-while para este problema? 
- El while valida antes de ejecutar, mientras que el do while ejecuta primero y valida después y es útil cuando se necesita pedir datos al menos una vez.

¿Cuál de las dos estructuras consideran más adecuada para este caso? ¿Por qué? 
- Para este problema el do while resulta más adecuado, ya que permite solicitar los datos al usuario al menos una vez, pero es necesario validar dentro del ciclo
 que la cantidad no sea -1 para evitar procesar datos inválidos.
*/
#include <stdio.h>
#define FILAESTRELLAS "********************************"

//------  PROTOTIPOS  ------
void ingresarDatos();
double subtotal(int, double);
void generarTicket();

//------  VARIABLES GLOBALES  ------
int cantidad;
double precio;
char descripcion[50];

//------  INVOCACION  ------
int main(){
	generarTicket();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void ingresarDatos(){
	printf("Ingrese la cantidad de productos:\n)- ");
	scanf("%d", &cantidad);
	fflush(stdin);
	
	if(cantidad == -1){
		return;
	}
	
	printf("Ingrese el precio unitario del producto:\n)- ");
	scanf("%lf", &precio);
	fflush(stdin);
	printf("Ingrese la descripcion del producto:\n)- ");
	scanf("%[^\n]s", &descripcion);
	fflush(stdin);
}

double subtotal(int cant, double prec){
	return cant * prec;
}

void generarTicket(){
	double importeTotal = 0;
	
	do{
		ingresarDatos();
		
		if(cantidad != -1){
			double sub = subtotal(cantidad, precio);
			printf("%d X $ %.2lf \n%s $ %.2lf\n\n", cantidad, precio, descripcion, sub);
		
			importeTotal += sub;
		}
		
	}while(cantidad != -1);
	 
	printf("%s\n", FILAESTRELLAS);
    printf("TOTAL A PAGAR: $ %.2lf\n", importeTotal);
    printf("%s\n", FILAESTRELLAS);
    printf("Gracias por su compra!");
}