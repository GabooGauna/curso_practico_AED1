#include <stdio.h>
//Variables globales
int cantidad;
double precio;
char formaPago;

//Prototipos
void ingresarDatos();
double calcularImporte(int, double);
double aplicarBeneficio();
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
	fflush(stdin);
	printf("Ingrese la forma de pago:\n-e: efectivo\n-c: tarjeta de credito\n-d: tarjeta de debito\n- ");
	scanf("%c", &formaPago);
}

double calcularImporte(int cant, double prec){
	return prec * (double) cant;
}

double aplicarBeneficio(){
	double total = calcularImporte(cantidad, precio);
	double bonificacion = 0;
	
	if(total >= 5000 && (formaPago == 'e' || cantidad > 10)){
		bonificacion = total * 0.15;
	}
	return bonificacion;
}

void emitirTicket(){
	ingresarDatos();
	
	double total = calcularImporte(cantidad, precio);
	double bonificacion = aplicarBeneficio();
	double pagar = total - bonificacion;
	
	printf("Cant. unidades: %d - Precio unit.: $%.2lf\n", cantidad, precio);
	printf("Total: $%.2lf\n", total);
	printf("Forma de pago: %c\n", formaPago);
	printf("Bonificacion: $%.2lf\n",bonificacion);
	printf("Total a pagar: $%.2lf\n", pagar);
	printf("Gracias por tu compra!");
}