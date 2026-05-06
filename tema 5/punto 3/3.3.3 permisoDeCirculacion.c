/*
OBJETIVO:
Determinar si una persona está autorizada a circular según el día
de la semana y la terminación de su DNI.

ESTRATEGIA:
Solicitar el último número del DNI y el día de la semana, evaluar
la paridad de ambos valores y determinar la autorización según
las reglas establecidas, mostrando el resultado en pantalla.

MODULOS:
- esPar(): determina si un número es par.
- imprimirDiaEnLetras(): muestra el día correspondiente.
- determinaAutorizacion(): evalúa si puede circular.
- permisoParaCircular(): coordina el proceso y muestra el resultado.
*/

#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#define GUIONES "--------------------"

//------  PROTOTIPOS  ------
bool esPar(int);
void imprimirDiaEnLetras(int);
bool determinaAutorizacion(int, int);
void permisoParaCircular();

//------  INVOCACION  ------
int main(){
	permisoParaCircular();
	return 0;
	system("pause");
}

//------  DESARROLLO  ------
//funcion contenedora

bool esPar(int num){
	return num % 2 == 0;
}

void imprimirDiaEnLetras(int dia){
	switch(dia){
		case 1:{
			printf("Lunes\n");
			break;
		}
		case 2: {
			printf("Martes\n");
			break;
		}
		case 3:{
			printf("Miercoles\n");
			break;
		}
		case 4: {
			printf("Jueves\n");
			break;
		}
		case 5:{
			printf("Viernes\n");
			break;
		}
		case 6: {
			printf("Sabado\n");
			break;
		}
		case 7:{
			printf("Domingo\n");
			break;
		}
		default: {
			break;
		}
	}
}
bool determinaAutorizacion(int dia, int num){
	bool autorizado;
	if(dia == 7){
		autorizado = false;
	}
	else if(esPar(dia) && !esPar(num)){
		autorizado = true;
	}
	else if(!esPar(dia) && esPar(num)){
		autorizado = true;
	}
	else{
		autorizado = false;
	}
	return autorizado;
}

void permisoParaCircular(){
	int dni;
	int dia;
	
	printf("Ingrese el ultimo numero de su documento:\n");
	scanf("%d", &dni);
	fflush(stdin);
	
	printf("Ingrese el dia de la semana:\n");
	printf("1-Lunes \n2-Martes \n3-Miercoles \n4-Jueves \n5-Viernes \n6-Sabado \n7-Domingo\n");
	scanf("%d", &dia);
	fflush(stdin);
	
	system("cls");
	
	printf("%s\n", GUIONES);
	printf("Dia de la semana: ");
	imprimirDiaEnLetras(dia);
	
	printf("Terminacion del dni: %d\n", dni);
	
	if(determinaAutorizacion(dia, dni )){
		printf("'Autorizado'\n");
	}
	else{
		printf("'No autorizado'\n");
	}
	printf("%s\n", GUIONES);
}