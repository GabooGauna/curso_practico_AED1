/*
.1. Finalizado el primer parcial de la asignatura AED1, se cuenta con las notas obtenidas por los 10
estudiantes que cursan la asignatura. El equipo docente desea analizar el desempeño general de los
alumnos. Para ello, se requiere un programa que:
- Almacene en un vector las notas obtenidas por los estudiantes.
- Calcule e informe:
o El promedio de las notas de los estudiantes que aprobaron el parcial (nota mayor o igual a 6).
o El porcentaje de aprobados sobre el total de alumnos.
- Recorra nuevamente el vector e informe todas las notas que sean mayores al promedio de los
aprobados, indicando también la posición que ocupan en el vector.
*Nota:
- Utilizar un vector para almacenar las notas.
- Implementar una función para calcular el promedio de los aprobados.
- Implementar una función para identificar e informar las notas mayores al promedio calculado, junto
con su posición en el vector. 

*/
#include <stdio.h>
#include <windows.h>
#define MAX 10

void ingresarNota(float n[]);
float promedioAprobados(float n[]);
float porcentajeAprobados(float n[]);
void mostrarMensaje(float n[], float promedio);

int main(){
	float notas[MAX];
	ingresarNota(notas);
	
	//system("cls");
	
	float promedioNotasAprobadas = promedioAprobados(notas);
	float porcentajeAlumnosAprobados = porcentajeAprobados(notas);
	
	printf("\t**** Notas por encima del promedio ****\n");
	mostrarMensaje(notas, promedioNotasAprobadas);
	return 0;
}


void ingresarNota(float n[MAX]){
	int i;
	for(i = 0; i < MAX; i++){
		printf("ingrese la nota del alumno: %d\n", i + 1);
		scanf("%f", &n[i]);
		fflush(stdin);
	}
}

float promedioAprobados(float n[]){
	int i;
	int cantAlumnos = 0;
	float sumaNotas = 0;
	
	for(i = 0; i < MAX; i++){
		if(n[i] >= 6){
			cantAlumnos++;
			sumaNotas += n[i];
		}
	}
	return sumaNotas / cantAlumnos;
}

float porcentajeAprobados(float n[]){
	int i;
	int cantAlumnos = 0;
	
	for(i = 0; i < MAX; i++){
		if(n[i] >= 6){
			cantAlumnos++;
		}
	}
	
	return cantAlumnos * 100 / MAX;
}

void mostrarMensaje(float n[], float promedio){
	int i;
	
	for(i = 0; i < MAX; i++){
		if(n[i] > promedio){
			printf("la nota del alumno %d es de %.2f\n", i + 1, n[i]);
		}
	}
}