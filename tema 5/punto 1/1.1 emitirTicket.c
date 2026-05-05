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