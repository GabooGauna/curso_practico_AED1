/*
OBJETIVO:
Mostrar los números enteros desde 1 hasta un valor ingresado
y calcular la suma total de esos números.

ESTRATEGIA:
Solicitar un número al usuario, recorrer desde 1 hasta ese número,
mostrar cada valor y acumular su suma para finalmente imprimir el total.

MODULOS:
- ingresarDatos(): solicita el número límite.
- mostrarYSumarNumeros(): muestra los números y calcula la suma.
- numerosEnterosSumados(): coordina el proceso general.
*/

#include <stdio.h>
//------  PROTOTIPOS  ------
void ingresarDatos();
void mostrarYSumarNumeros(int);
void numerosEnterosSumados();

//------  VARIABLES GLOBALES  ------
int numero;
int suma = 0;

//------  INVOCACION  ------
int main(){
	numerosEnterosSumados();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void numerosEnterosSumados(){
	ingresarDatos();
	mostrarYSumarNumeros(numero);
}

void ingresarDatos(){
	printf("Ingrese un numero:\n)- ");
	scanf("%d", &numero);
}

void mostrarYSumarNumeros(int num){
	int i;
	for(i = 1; i <= num; i++){
		printf("%d\n", i);
		suma += i;
	}
	printf("la suma total de todos los numeros es %d", suma);
}