#include <stdio.h>
#define GUIONES "--------------------"

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
	
	if(cantidad == -1){
		return;
	}
	
	fflush(stdin);
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
	
	ingresarDatos();

	while(cantidad != -1){
		double sub = subtotal(cantidad, precio);
		printf("%d X $ %.2lf \n%s $ %.2lf\n\n", cantidad, precio, descripcion, sub);
		
		importeTotal += sub;
		ingresarDatos();
	}
	printf("Su importe total es de: $ %.2lf", importeTotal);
}