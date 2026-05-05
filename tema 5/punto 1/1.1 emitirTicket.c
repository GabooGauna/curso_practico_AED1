/*
OBJETIVO:
Calcular el importe total de una compra en base a la cantidad de unidades
y el precio unitario ingresados por el usuario.

ESTRATEGIA:
Solicitar cantidad y precio, calcular el total multiplicando ambos valores
y mostrar un ticket con los datos de la compra.

MODULOS:
- ingresarDatos(): solicita cantidad y precio.
- calcularImporte(): calcula el total (cantidad * precio).
- emitirTicket(): coordina el proceso y muestra el ticket.
*/

#include <stdio.h>
//Variables globales
int cantidad;
double precio;

//Prototipos
void ingresarDatos();
double calcularImporte(int, double);
void emitirTicket();

//invocacion
int main(){
	emitirTicket();
	return 0;
}

//Desarrillo de funciones
void ingresarDatos(){
	printf("Ingrese la cantidad de unidades de producto que desea llevar:\n- ");
	scanf("%d", &cantidad);
	fflush(stdin);
	printf("Ingrese el precio unitario del producto seleccionado:\n- ");
	scanf("%lf", &precio);
}

double calcularImporte(int cant, double prec){
	return prec * (double) cant;
}

void emitirTicket(){
	ingresarDatos();
	printf("Cant. unidades: %d - Precio unit.: $%.2lf\nTotal: $%.2lf\nGracias por su compra!", cantidad, precio, calcularImporte(cantidad, precio));
}