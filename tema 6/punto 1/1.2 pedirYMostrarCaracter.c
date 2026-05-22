/*
1.2. Escribir un programa que disponga de la declaración de un tipo de dato tCaracter que permita renombrar
al tipo de dato char. Declarar una variable del tipo tCaracter, asignarle un valor e imprimir por pantalla su
contenido. 
*/

#include <stdio.h>

//variables globales
typedef char tCaracter;
tCaracter caracter;

//prototipos
void pedirYMostrarCaracter();

//invocacion
int main(){
	pedirYMostrarCaracter();
	return 0;
}

//desarrollo de funciones
void pedirYMostrarCaracter(){
	printf("Ingrese un caracter para imprimirlo:\n- ");
	scanf("%c", &caracter);
	fflush(stdin);
	
	printf("El caracter ingresado es: %c", caracter);
}