#include <stdio.h>
/*
OBJETIVO:      Desarrollar un programa que permite calcular el perimetro de una caja y mostrar el resultado en pantalla.
ESTRATEGIA:    1. ingresar_datos: se ingresa por teclado los datos correspondientes a alto y ancho. 2. calcular_perimetro: realizar el
               calculo realizando 2 * (alto + ancho). 3. mostrar_datos: mostrar por pantalla el resultado de ese calculo.
RESULTADO:
*/

//------  VARIABLES GLOBALES  ------
float alto;
float ancho;
float resultado;

//------  PROTOTIPOS  ------
float calcular_perimetro();
void ingresar_datos();
void mostrar_datos();
void perimetroDeCaja();


//------  INVOCACION  ------
int main(){
	perimetroDeCaja();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void perimetroDeCaja(){
	ingresar_datos();
	calcular_perimetro();
	mostrar_datos();
}

void ingresar_datos(){
	printf("inserte la altura de la caja: \n");
	scanf("%f", &alto);
	fflush(stdin);
	printf("inserte el ancho de la caja: \n");
	scanf("%f", &ancho);
}

float calcular_perimetro(){
	resultado = 2 * (alto + ancho); 
	return resultado;
}

void mostrar_datos(){
	printf("la altura de la caja es %.1f y el ancho es %.1f. El perimetro es: %.1f", alto, ancho, calcular_perimetro());
} 
