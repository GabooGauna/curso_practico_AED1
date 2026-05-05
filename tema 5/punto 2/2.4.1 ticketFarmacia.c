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
