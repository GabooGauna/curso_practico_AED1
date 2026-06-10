/*
El responsable de cada comisión de Algoritmos 1 maneja una planilla con los datos de los alumnos que
participan en ella. Las comisiones están compuestas por la misma cantidad de alumnos. A fin de verificar
que no haya alumnos repetidos en las distintas comisiones, se requiere comparar los nombres de los
alumnos de la Comisión 1 con los de la Comisión 2. Al comparar, se desea ver en pantalla el nombre que
figura en cada comisión en caso de que sean iguales, junto con la posición en cada serie de datos, y la
leyenda “Son iguales”. También se desea conocer la cantidad de nombres repetidos.
*Nota:
- Utilizar vectores para almacenar los nombres de cada comisión
- Definir el/los módulos necesarios para la generación de la Comisión 1, y luego reutilizarlos para
generar la Comisión 2
*/

#include <stdio.h>
#define ALUMNOS 5

typedef char tString[30];

void ingresarDatos(tString comision[]);
void compararComisiones(tString comisionA[],tString comisionB[]);

int main(){
	tString comision_uno[ALUMNOS];
	tString comision_dos[ALUMNOS];
	
	printf("**** ALUMNOS COMISION 1 ****\n");
	ingresarDatos(comision_uno);
	printf("\n**** ALUMNOS COMISION 2 ****\n");
	ingresarDatos(comision_dos);
	
	compararComisiones(comision_uno, comision_dos);
	return 0;
}

void ingresarDatos(tString comision[]){
	for(int i = 0; i < ALUMNOS; i++){
		printf("Ingresar nombre del alumno:\n");
		scanf("%30[^\n]", &comision[i]);
		fflush(stdin);
	}
}

void compararComisiones(tString comisionA[],tString comisionB[]){
	int cantRepetidos = 0;
	
	printf("\n**** RESULTADO COMPARACION ****\n");
	
	for(int i = 0; i < ALUMNOS; i++){
		for(int j = 0; j < ALUMNOS; j++){
			if(strcmp(comisionA[i], comisionB[j]) == 0){
			cantRepetidos += 1;
			printf("Nombre: %s\nPosicion comision 1: %d\nPosicion comision 2: %d\nSon iguales\n\n", comisionA[i], i, j);
			}
		}
	}
	printf("Cantidad de nombres repetidos: %d", cantRepetidos);
}