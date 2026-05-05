/*
OBJETIVO:
Calcular el importe final de una compra aplicando una bonificación
según el tipo de producto seleccionado.

ESTRATEGIA:
Solicitar cantidad, precio y tipo de producto, calcular el importe total,
determinar el porcentaje de descuento correspondiente y mostrar
el total a pagar junto con el porcentaje aplicado.

MODULOS:
- ingresarDatos(): solicita cantidad, precio y tipo de producto.
- importe(): calcula el total de la compra.
- bonificacion(): aplica el descuento según el tipo de producto.
- emitirTicket(): coordina el proceso y muestra el resultado final.
*/

#include <stdio.h>
//------  PROTOTIPOS  ------
void ingresarDatos();
double importe(int, double);
double bonificacion();
void emitirTicket();

//------  VARIABLES GLOBALES  ------
int cantidad;
double precio;
char tipoProducto;
int porcentaje;


//------  INVOCACION  ------
int main(){
	emitirTicket();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void emitirTicket(){
	ingresarDatos();
	double total = bonificacion(); 
	
	printf("El importe a pagar es de %%%.2lf\n", total);
	printf("%% bonificado: %d", porcentaje);
}


void ingresarDatos(){
	printf("Ingrese la cantidad del producto que desea comprar:\n)- ");
	scanf("%d", &cantidad);
	fflush(stdin);
	printf("Ingrese el precio unitario del producto:\n- ");
	scanf("%lf", &precio);
	fflush(stdin);
	printf("Ingrese el tipo de producto:\nP-Perfumeria\nF-Farmacia\nL-Limpieza\n)-");
	scanf("%c", &tipoProducto);
}

double importe(int cant, double prec){
	return (double)cant * prec;
}

double bonificacion(){
	double total = importe(cantidad, precio);
	double totalConDescuento;
	
	switch(tipoProducto)
	{
		case 'p': case 'P':
			porcentaje = 5;
			break;
		case 'f': case 'F':
			porcentaje = 10;
			break;
		case 'l':case 'L':
			porcentaje = 15;
			break;
		default:
			porcentaje = 0;
			break;
	}
	return totalConDescuento = total - (total * porcentaje / 100);
}