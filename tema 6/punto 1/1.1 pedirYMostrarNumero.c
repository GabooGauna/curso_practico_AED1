/*
1.1. Escribir un programa que disponga de la declaración de un tipo de dato tNumeroReal que permita
renombrar al tipo de dato float. Declarar una variable del tipo tNumeroReal, asignarle un valor e imprimir
por pantalla su contenido.
*/

#include <stdio.h>

//variables globales
typedef float tNumeroReal;
tNumeroReal numero;

//prototipos
void pedirYMostrarNumero();

//invocacion
int main(){
	pedirYMostrarNumero();
	return 0;
}

//desarrollo de funciones
void pedirYMostrarNumero(){
	printf("Ingrese un numero para imprimirlo:\n- ");
	scanf("%f", &numero);
	fflush(stdin);
	
	printf("El numero ingresado es: %.2f", numero);
}