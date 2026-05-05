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