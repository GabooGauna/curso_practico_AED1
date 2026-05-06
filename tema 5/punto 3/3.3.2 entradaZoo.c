/*
OBJETIVO:
Calcular el importe total a pagar por un grupo de personas que visitan
el zoológico según la edad de cada integrante.

ESTRATEGIA:
Solicitar la cantidad de personas del grupo, pedir la edad de cada una,
determinar el precio de la entrada según la edad, acumular el total
y mostrar un ticket con la cantidad de personas y el importe final.

MODULOS:
- valorEntrada(): determina el precio según la edad.
- totalAPagarPorGrupo(): recorre el grupo y acumula el total.
- mostrarTicket(): muestra la cantidad de personas y el total a pagar.
*/

#include <stdio.h>
#include <windows.h>
#define GUIONES "------------------------------"

//------  PROTOTIPOS  ------
float valorEntrada(int);
float totalAPagarPorGrupo();
void mostrarTicket(int, float);

//------  INVOCACION  ------
int main(){
	totalAPagarPorGrupo();
	system("pause");
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
float valorEntrada(int numeroPersona){
	int edad;          //edad del integrante familiar
	float precioEntrada; //precio por edad
	
	printf("Ingrese la edad de la persona %d:\n- ", numeroPersona);
	scanf("%d", &edad);
	fflush(stdin);
	
	if(edad < 6){
		precioEntrada = 0;
	}
	else if(edad <= 12){
		precioEntrada = 8500;
	}
	else if(edad >= 65){
		precioEntrada = 7200;
	}
	else{
		precioEntrada = 1500;
	}
	return precioEntrada;
}

float totalAPagarPorGrupo(){
	int cantidadPersonas;
	float total = 0;
	
	printf("Ingrese la cantidad de integrantes del grupo: \n");
	scanf("%d", &cantidadPersonas);
	fflush(stdin);
	
	int i;
	for(i = 1; i <= cantidadPersonas; i++){
		total += valorEntrada(i);
	}
	mostrarTicket(cantidadPersonas, total);
}

void mostrarTicket(int cantidadPersonas,float total){
	system("cls");
	printf("\tENTRADA AL ZOOLOGICO\n");
	printf("%s\n", GUIONES);
	printf("La cantidad de personas que conforman el grupo es de: %d\n", cantidadPersonas);
	printf("El importe a pagar es de: $%.2f\n", total);
	printf("%s\n", GUIONES);
	printf("Muchas gracias!\n");
}