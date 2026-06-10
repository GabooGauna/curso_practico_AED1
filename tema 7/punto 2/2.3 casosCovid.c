#include <stdio.h>
#define MES 3
#define DIAS 10

typedef char tString[15];

void ingresarDatos(int casosPositivos[][MES], tString meses[]);
void totalCasosMensual(int casosPositivos[][MES], int totalCasos[], tString meses[]);
void mayorCantidadCasos(int casosPositivos[][MES], tString meses[]);

int main(){
	int casosPositivos[DIAS][MES];
	int totalCasos[MES];
	tString meses[MES] = {"Marzo", "Abril", "Mayo"};
	
	ingresarDatos(casosPositivos, meses);
	totalCasosMensual(casosPositivos, totalCasos, meses);
	mayorCantidadCasos(casosPositivos, meses);
	
	return 0;
}

void ingresarDatos(int casosPositivos[][MES], tString meses[]){
	for(int i = 0; i < MES; i++){
		printf("Casos del mes de %s\n", meses[i]);
		for(int j = 0; j < DIAS; j++){
			printf("Ingrese la cantidad de casos del dia %d\n", j + 1);
			scanf("%d", &casosPositivos[j][i]);
		}
	}
}

void totalCasosMensual(int casosPositivos[][MES], int totalCasos[], tString meses[]){
	for(int i = 0; i < MES; i++){
	printf("\nMes: %s\n", meses[i]);
		int total = 0;
		
		for(int j = 0; j < DIAS; j++){
			printf("Dia %d: %d casos.\n\n", j + 1, casosPositivos[j][i]);
			total += casosPositivos[j][i];
		}
		totalCasos[i] = total;
		printf("Total mensual de casos: %d\n", totalCasos[i]);
	}
}

void mayorCantidadCasos(int casosPositivos[][MES], tString meses[]){
	int mayor = casosPositivos[0][0];
	int dia = 0;
	int mes = 0;
	for(int i = 0; i < MES; i ++){
		for(int j = 0; j < DIAS; j++){
			if(casosPositivos[j][i] > mayor){
				mayor = casosPositivos[j][i];
				dia = j;
				mes = i;
			}
		}
	}
	printf("El dia %d de %s ocurrio la mayor cantidad de casos: %d", dia + 1, meses[mes], mayor);
}