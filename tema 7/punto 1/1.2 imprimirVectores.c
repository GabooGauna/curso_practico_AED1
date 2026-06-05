/*
.Generar un vector A con 10 elementos de tipo char. A continuación, a partir del vector A, generar un
vector B con los mismos elementos, pero en orden inverso. Luego imprimir simultáneamente ambos
vectores.
*Nota:
- Utilizar una función para generar el vector B
- Utilizar otra función para mostrar ambos vectores simultáneamente. 

*/
#include <stdio.h>
#include <windows.h>
#define MAX 10

void ingresarLetras(char vectorA[]);
void generarNuevoVector(char vectorA[], char vectorB[]);
void imprimirVectores(char vectorA[], char vectorB[]);


int main(){
	char vectorA[MAX];
	char vectorB[MAX];
	
	ingresarLetras(vectorA);
	generarNuevoVector(vectorA, vectorB);
	
	system("cls");
	imprimirVectores(vectorA, vectorB);
	return 0;
}

void ingresarLetras(char vectorA[]){
	printf("\t**** INGRESAR 10 CARACTERES ****\n");
	
	int i;
	for(i = 0; i < MAX; i++){
		printf("ingrese el caracter n.%d: \n", i + 1);
		scanf(" %c", &vectorA[i]);
	}
}

void generarNuevoVector(char vectorA[], char vectorB[]){
	int i;
	
	for(i = 0; i < MAX; i++){
		vectorB[i] = vectorA[MAX - 1 - i];
	}
}

void imprimirVectores(char vectorA[], char vectorB[]){
	int i;
	printf("Vector A \tVectorB\n");
	for(i = 0; i < MAX; i++){
		printf("%c\t\t%c\n", vectorA[i], vectorB[i]);
	}
}