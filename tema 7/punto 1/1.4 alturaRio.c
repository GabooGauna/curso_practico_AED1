#include <stdio.h>
#include <windows.h>
#define MESES 12

typedef char tString[20];

void cargarDatos(float pSerie[], tString mes[]);
int buscarIndiceMenor(float pSerie[]);
void mostrarResultado(float pSerieA[], float pSerieB[], int indiceMenorA, int indiceMenorB, tString mes[]);

int main(){
	float serieA[MESES];
	float serieB[MESES];
	tString mes[MESES] = {"Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre", "Enero", "Febrero", "Marzo", "Abril"};
	
	printf("Ingreso de alturas fluviales Serie A\n");
	cargarDatos(serieA, mes);
	system("cls");
	printf("Ingreso de alturas fluviales Serie B\n");
	cargarDatos(serieB, mes);
	system("cls");
	
	int indiceMenorA = buscarIndiceMenor(serieA);
	int indiceMenorB = buscarIndiceMenor(serieB);
	
	mostrarResultado(serieA, serieB, indiceMenorA, indiceMenorB, mes);
	
	return 0;
}

void cargarDatos(float pSerie[], tString mes[]){
	for(int i = 0; i < MESES; i++){
	printf("Ingrese la altura correspondiente al mes de %s\n", mes[i]);
	scanf("%f", &pSerie[i]);
	}
}

int buscarIndiceMenor(float pSerie[]){
	int indiceMenor = 0;
	
	for(int i = 1; i < MESES; i++){
		if(pSerie[i] < pSerie[indiceMenor]){
			indiceMenor = i;
		}
	}
	return indiceMenor;
}

void mostrarResultado(float pSerieA[], float pSerieB[], int indiceMenorA, int indiceMenorB, tString mes[]){
	printf("la menor altura de la serie A es: %.2f y corresponde al mes de: %s\n", pSerieA[indiceMenorA], mes[indiceMenorA]);
	printf("la menor altura de la serie B es: %.2f y corresponde al mes de: %s\n", pSerieB[indiceMenorB], mes[indiceMenorB]);
	(pSerieA[indiceMenorA] > pSerieB[indiceMenorB])?printf("En la serieB se dio la menor altura"):printf("En la serieA se dio la menor altura");
}