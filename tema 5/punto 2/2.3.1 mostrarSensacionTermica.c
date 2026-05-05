/*
Se dispone de un termómetro para medir con exactitud la temperatura en un determinado lugar. Se
desea una aplicación que permita ingresar un valor de temperatura y muestre un mensaje que indique
la sensación térmica, considerando los rangos siguientes:
Rango de temperatura Sensación térmica
[-10, 10) Mucho frío
[10, 15) Poco frío
[15, 25) Temperatura normal
[25, 30) Poco calor
[30, 45) Mucho calor
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