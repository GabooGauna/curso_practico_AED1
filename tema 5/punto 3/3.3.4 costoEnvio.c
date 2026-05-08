/*
OBJETIVO:
Calcular el costo de envío de un pedido según la cantidad de artículos
comprados y permitir procesar múltiples pedidos.

ESTRATEGIA:
Solicitar la cantidad de productos, calcular el gasto de envío mediante
una función, mostrar el total del pedido y consultar al usuario si desea
realizar otro cálculo.

MODULOS:
- ingresarCantidad(): solicita y valida la cantidad de productos.
- calcularEnvio(): calcula el costo total de envío.
- continuarCalculando(): consulta si desea procesar otro pedido.
- procesarPedido(): coordina el proceso general del programa.
*/

#include <stdio.h>
#include <windows.h>
#define FILAESTRELLAS "********************************"

//------  PROTOTIPOS  ------
int ingresarCantidad();
void procesarPedido();
char continuarCalculando();
float calcularEnvio(int);

//------  INVOCACION  ------
int main(){
	procesarPedido();
	return 0;
}

//------  DESARROLLO  ------
//ingresar cantidad de productos de un pedido
int ingresarCantidad(){
	int cantidad;
	
	do{
		printf("Ingrese la cantidad de articulos que desea comprar:\n- ");
		scanf("%d", &cantidad);
		fflush(stdin);
		
		if(cantidad <= 0){
			printf("ERROR: Debe ingresar una cantidad mayor a 0.\n");
		}
	
	}while(cantidad <= 0);
	
	return cantidad;
}

//realizar calculo de costo de envio
float calcularEnvio(int productos){
	return 1250 + (productos - 1) * 750;
}

//validad si quiere volver a procesar un pedido
char continuarCalculando(){
	char continuarProceso;
	printf("Desea calcular los gastos de envio para otro pedido?\n");
	printf("S- Si\nN- No\n-");
	scanf(" %c", &continuarProceso);
	fflush(stdin);
	
	return continuarProceso;
}

//funcion principal
void procesarPedido(){	
	int productos;
	float total;
	char continuarProceso;
	
	do{
		productos = ingresarCantidad();
		
  		total = calcularEnvio(productos);
		
		system("cls");
		
		printf("%s\n", FILAESTRELLAS);
		printf("La cantidad de productos pedidos es de: %d\n", productos);
		printf("El total de gastos de envio es de: $%.2f\n", total);
		printf("%s\n\n", FILAESTRELLAS);
		
		continuarProceso = continuarCalculando();
		
		system("cls");
	}while(continuarProceso == 's' || continuarProceso == 'S');
}