/*
OBJETIVO:
Calcular el porcentaje de victorias de un equipo en base a los partidos
jugados y ganados.

ESTRATEGIA:
Solicitar la cantidad de partidos jugados y ganados, calcular el porcentaje
de victorias y mostrar el resultado en pantalla.

MODULOS:
- ingresarDatos(): solicita partidos jugados y ganados.
- porcentajeVictorias(): calcula el porcentaje de victorias.
- mostrarDatosDeEquipo(): coordina el proceso y muestra el resultado.
*/

#include <stdio.h>
//Variables globales
int partidosJugados;
int partidosGanados;

//prototipos
void ingresarDatos();
int porcentajeVictorias(int, int);
void mostrarDatosDeEquipo();

//invocacion
int main(){
	mostrarDatosDeEquipo();
	return 0;
}

//desarrollo de variables
void ingresarDatos(){
	printf("Ingrese la cantidad de partidos jugados del equipo:\n- ");
	scanf("%d", &partidosJugados);
	fflush(stdin);
	printf("Ingrese la cantidad de partidos ganados del equipo:\n- ");
	scanf("%d", &partidosGanados);
}

int porcentajeVictorias(int pGanados, int pJugados){
	return (pGanados * 100) / pJugados;
}

void mostrarDatosDeEquipo(){
	printf("###\tTorneo de Futbol\t###\n\n");
	ingresarDatos();
	printf("El porcentaje de victorias del equipo es de: %d%%", porcentajeVictorias(partidosGanados, partidosJugados));
}