/*
OBJETIVO:
Determinar el monto de préstamo que puede obtener un solicitante
en base a su sueldo.

ESTRATEGIA:
Solicitar el sueldo del usuario, evaluar si cumple con el mínimo
para un préstamo fijo o calcular uno proporcional, y mostrar el
monto disponible.

MODULOS:
- ingresarDatos(): solicita el sueldo del solicitante.
- autorizarPrestamo(): calcula el monto del préstamo.
- totalPrestamo(): coordina el proceso y muestra el resultado.
*/

#include <stdio.h>
//Variables globales
double sueldoSolicitante;

//Prototipos
void ingresarDatos();
double autorizarPrestamo();
void totalPrestamo();

//invocacion
int main(){
	totalPrestamo();
	return 0;
}

//Desarrillo de funciones
void ingresarDatos(){
	printf("-----  SISTEMA DE PRESTAMOS BANCARIOS  -----\nIngrese el monto de su sueldo:\n- ");
	scanf("%lf", &sueldoSolicitante);
}

double autorizarPrestamo(){
	double prestamo = 0;
	if(sueldoSolicitante >= 100000){
		prestamo = 300000;
	}
	else{
		prestamo = sueldoSolicitante * 0.75;
	}
	return prestamo;
}

void totalPrestamo(){
	ingresarDatos();
	
	printf("-----  PRESTAMOS DISPONIBLES  -----\n");
	printf("El sueldo del solicitante es de: $%.2lf\n", sueldoSolicitante);
	printf("El prestamo disponible es de: $%.2lf", autorizarPrestamo());
}