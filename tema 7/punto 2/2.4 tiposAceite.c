/*
Una consultora realizó un estudio de mercado para determinar la opinión del público respecto de 5 tipos
de aceites. Para ello recibe tres posibles valoraciones del consumidor: excelente (1), buena (2) y mala
(3). Cuenta con una gran cantidad de respuestas. En cada respuesta tiene los datos: tipo de aceite y
analizar la cantidad de opiniones de cada valoración para cada tipo de
aceite. La consultora desea conocer cuál es el tipo de aceite con mayor cantidad de valoración Excelente
y cuál es el tipo con mayor cantidad de valoración Mala. En cada caso, indique el tipo de aceite y la
cantidad.
*Nota:
- Utilizar una matriz para contabilizar la cantidad de opiniones de cada valoración para cada tipo
de aceite
- El ingreso de datos se repite hasta que el usuario indique una condición de fin de ingreso de
datos
*/

#include <stdio.h>
#define ACEITE 5
#define VALORACION 3

typedef char tString[12];

void ingresarDatos(int aceites[][VALORACION]);
int continuar();
void mayorCantidad(int aceites[][VALORACION], tString valoraciones[]);

int main(){
	int aceites[ACEITE][VALORACION] = {0};
	tString valoraciones[VALORACION] = {"Excelente", "Buena", "Mala"};
	
	ingresarDatos(aceites);
	mayorCantidad(aceites, valoraciones);
	return 0;
}

void ingresarDatos(int aceites[][VALORACION]){
	int tipoAceite = 0;
	int valoracion = 0;
	int continuarProceso = continuar();
	
	while(continuarProceso == 1){
		printf("Tipo de aceite (1-5): ");
		scanf("%d", &tipoAceite);
		
		printf("\nValoracion: (1-Excelente, 2-Buena, 3-Mala): ");
		scanf("%d", &valoracion);
		
		aceites[tipoAceite - 1][valoracion -1]++;
		
		continuarProceso = continuar();
	}	
}

void mayorCantidad(int aceites[][VALORACION], tString valoraciones[]){
	int mayorExcelente = aceites[0][0];
	int indiceMala = 0;
	int mayorMala= aceites[0][2];
	int indiceExcelente = 0;
	
	for(int i = 1; i < ACEITE; i++){
		if(aceites[i][0] > mayorExcelente){
			mayorExcelente = aceites[i][0];
			indiceExcelente = i;
		}
	}
	for(int i = 1; i < ACEITE; i++){
		if(aceites[i][2] > mayorMala){
			mayorMala = aceites[i][2];
			indiceMala = i;
		}
	}
	
	printf("El aceite con mas valoraciones '%s' es: %d\n", valoraciones[0] ,indiceExcelente + 1);
	printf("Total de valoraciones: %d\n", mayorExcelente);
	
	printf("El aceite con mas valoraciones '%s' es: %d\n", valoraciones[2] ,indiceMala + 1);
	printf("Total de valoraciones: %d\n", mayorMala);
}

int continuar(){
	int continuarProceso = 0;
	printf("Desea ingresar datos?\n");
	printf("1: Si\n2:No\n");
	scanf("%d", &continuarProceso);
	
	return continuarProceso;
}