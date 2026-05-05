/*
OBJETIVO:
Determinar la sensación térmica en base a la temperatura ingresada.

ESTRATEGIA:
Solicitar la temperatura actual, evaluarla mediante rangos y
mostrar el mensaje correspondiente según la sensación térmica.

MODULOS:
- ingresarDatos(): solicita la temperatura.
- termometro(): evalúa la temperatura y determina la sensación.
- mostrarSensacionTermica(): coordina el proceso general.
*/

#include <stdio.h>
//------  PROTOTIPOS  ------
void ingresarDatos();
void termometro(int);
void mostrarSensacionTermica();

//------  VARIABLES GLOBALES  ------
int temperatura;

//------  INVOCACION  ------
int main(){
	mostrarSensacionTermica();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void mostrarSensacionTermica(){
	ingresarDatos();
	termometro(temperatura);
}

void ingresarDatos(){
	printf("Ingresar la temperatura actual:\n- ");
	scanf("%d", &temperatura);
}

void termometro(int temp){
	if(temp >= -10 && temp < 10){
		printf("Mucho frio");
	}
	else if( temp >= 10 && temp < 15){
		printf("Poco frio");
	}
	else if(temp >= 15 && temp < 25){
		printf("Temperatura normal");
	}
	else if(temp >= 25 && temp < 30){
		printf("Poco calor");
	}
	else if(temp >= 30 && temp < 45){
		printf("Mucho calor");
	}
	else{
		printf("Temperatura fuera de rango");
	}	
	}