#include <stdio.h>
#define DIAS_ENERO 10

void cargarPasajeros(int pasajeros[]);
float calcularPromedio(int pasajeros[]);
int buscarMayor(int pasajeros[]);
void mostrarResultado(int pasajeros[], float promedio, int indice);

int main(){
	int pasajeros[DIAS_ENERO];
	cargarPasajeros(pasajeros);
	float promedioPasajeros = calcularPromedio(pasajeros);
	int indiceMayor = buscarMayor(pasajeros);
	mostrarResultado(pasajeros, promedioPasajeros, indiceMayor);
	return 0;
}

void cargarPasajeros(int pasajeros[]){
	for (int i = 0; i < DIAS_ENERO; i++){
		printf("Ingrese la cantidad de pasajeros del dia %d\n", i + 1);
		scanf(" %d", &pasajeros[i]);
	}
}

float calcularPromedio(int pasajeros[]){
	int sumaTotal = 0;
	
	for(int i = 0; i < DIAS_ENERO; i++){
		sumaTotal += pasajeros[i];
	}
	
	return (float)sumaTotal / DIAS_ENERO;
}

int buscarMayor(int pasajeros[]){
	int indiceMayor = 0;
	
	for(int i = 1; i < DIAS_ENERO; i++){
		if(pasajeros[i] > pasajeros[indiceMayor]){
			indiceMayor = i;
		}
	}
	return indiceMayor;
}

void mostrarResultado(int pasajeros[], float promedio, int indice){
	int dia = indice + 1;
	printf("El promedio total de pasajeros en el mes de Enero es de: %.2f\n", promedio);
	printf("El dia con mayor cantidad de pasajeros fue el dia %d con %d pasajeros.", dia, pasajeros[indice]);
	
}