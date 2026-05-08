/*
OBJETIVO:
Generar tickets de restaurante calculando el importe total a pagar
incluyendo IVA y propina.

ESTRATEGIA:
Solicitar el nombre del cliente y el costo de la comida, calcular
el importe final aplicando IVA y propina, mostrar el ticket y consultar
si se desea generar otro.

MODULOS:
- consumo(): solicita y valida el costo de la comida.
- importe(): calcula el total con IVA y propina.
- continuarGenerando(): consulta si desea emitir otro ticket.
- generarTicket(): coordina el proceso y muestra el ticket.
*/

#include <stdio.h>
#include <windows.h>
#define GUIONES "--------------------"

//------  PROTOTIPOS  ------
float consumo();
float importe(float);
void generarTicket();
char continuarGenerando();

//------  INVOCACION  ------
int main(){
	generarTicket();
	return 0;
}

//------  DESARROLLO  ------
//ingresar el precio de la comida
float consumo(){
	float precio;
	do{
		printf("Ingresar el costo de la comida:\n- ");
		scanf("%f", &precio);
		fflush(stdin);
		
		if(precio <= 0){
			printf("Error. Ingrese un costo valido.\n");
		}
	}while(precio <= 0);
	return precio;
}

//calcular el importe total PRECIO + IVA + PROPINA
float importe(float precio){
	return precio * 1.31;
}

//funcion principal
void generarTicket(){
	float precioComida;
	float importeTotal;
	char nombre[20];
	char generarNuevoTicket;
	
	do{
		printf("Ingresar nombre del cliente:\n- ");
		scanf("%[^\n]s", &nombre);
		fflush(stdin);
		
		precioComida = consumo();
		importeTotal = importe(precioComida);
		
		system("cls");
		
		printf("\t TICKET\n");
		printf("%s\n", GUIONES);
		printf("Cliente: %s\n", nombre);
		printf("Importe total a pagar (Consumo + IVA + Propina): %.2f\n", importeTotal);
		printf("%s\n", GUIONES);
		
		generarNuevoTicket = continuarGenerando();
		
		system("cls");
	}while(generarNuevoTicket == 's' || generarNuevoTicket == 'S');
}

//valida si quiere generar un nuevo ticket
char continuarGenerando(){
	char continuar;
	printf("Desea generar un nuevo ticket?:\n");
	printf("S- Si\nN- No\n");
	scanf("%c", &continuar);
	fflush(stdin);
	
	return continuar;
}