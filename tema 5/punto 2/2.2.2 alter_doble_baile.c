/*
OBJETIVO:
Calcular el precio final de una entrada para un baile de egresados
según el tipo de entrada y si fue comprada de forma anticipada.

ESTRATEGIA:
Solicitar si la entrada es anticipada y el tipo de consumición,
determinar el precio base, aplicar descuento si corresponde
y mostrar el comprobante con el importe final.

MODULOS:
- ingresarDatos(): solicita tipo de entrada y compra anticipada.
- calcularPrecioBase(): determina el precio según consumición.
- calcularPrecioFinal(): aplica descuento si corresponde.
- imprimirEntrada(): coordina el proceso y muestra el comprobante.
*/

#include <stdio.h>
//Variables globales
char entradaAnticipada;
int consumicion;

//Prototipos
void ingresarDatos();
int calcularPrecioBase(int);
double calcularPrecioFinal();
void imprimirEntrada();

//invocacion
int main(){
	imprimirEntrada();
	return 0;
}

//Desarrillo de funciones
void ingresarDatos(){
	printf("-----  BOLETERIA BAILE DE EGRESADOS  -----\n");
	printf("Comprar entrada anticipada: \nS: Si \nN: No\n- ");	
	scanf("%c", &entradaAnticipada);
	fflush(stdin);
	printf("Tipo de entrada: \n1: Sin consumicion \n2: Con consumicion\n- ");	
	scanf("%d", &consumicion);
}

int calcularPrecioBase(int tipo){
	int precioBase = 0;
	
	if(tipo == 1){
		precioBase = 500;
	}
	else if (tipo == 2){
		precioBase = 750;
	}
	else{
		printf("Error de tipo");
	}
	return precioBase;
}

double calcularPrecioFinal(){
	double precioBase = calcularPrecioBase(consumicion);
	double precioFinal = 0;
	
	if(entradaAnticipada == 's' || entradaAnticipada == 'S'){
		precioFinal = precioBase - (precioBase * 0.20);
		
	}else{
		precioFinal = precioBase;
	}
	return precioFinal;
}

void imprimirEntrada(){
	ingresarDatos();
	
	printf("-----  COMPROBANTE  -----\n");
	if(entradaAnticipada == 's' || entradaAnticipada == 'S'){
		printf("Entrada anticipada: Si (20%% de descuento)\n");
	}
	else{
		printf("Entrada anticipada: Sin entrada anticipada\n");
	}
	
	
	if(consumicion == 2){
		printf("Tipo: Con Consumicion\n");
	}
	else{
		printf("Tipo: Sin Consumicion\n");
	}
	
	printf("El importe a pagar es de $%.2lf", calcularPrecioFinal());
}
