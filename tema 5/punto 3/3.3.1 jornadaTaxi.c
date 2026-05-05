#include <stdio.h>
#define FILAESTRELLAS "********************************"

char jornadaLaboral();
double cantidadKm();
double tarifaTotal(double);
void importeRecaudado();


int main(){
	importeRecaudado();
	return 0;
}

char jornada(){
	char jornadaLaboral;
	printf("%s\n", FILAESTRELLAS);
	printf("Termino su jornada laboral?\n");
	printf("S- Si\nN- No\n");
	printf("%s\n", FILAESTRELLAS);
	scanf(" %c", &jornadaLaboral);
	return jornadaLaboral;
}

double cantidadKm(){
	double kilometros;
	printf("Cuantos kilometros recorrio el pasajero?\n");
	scanf("%lf", &kilometros);
	return kilometros;
}

double tarifaTotal(double km){
	double tarifaBase = 1850;
	double precioPorKm = 142.50;
	double total = tarifaBase + (precioPorKm * km);
	return total;
}

void importeRecaudado(){
	int pasajeros = 0;
	double total = 0;
	char estado;
	
	do{	
		double km = cantidadKm();
		double tarifa = tarifaTotal(km);
		total += tarifa;
		pasajeros ++;
		printf("Pasajero numero: %d\n", pasajeros);
		printf("Cantidad de km recorridos %.1lf\n", km);
		printf("Tarifa total: $%.2lf\n", tarifa);
		estado = jornada();
		
	}while(estado != 's' && estado != 'S');
	printf("La cantidad de pasajeros fue de: %d\nEl total recaudado es de $%.2lf",pasajeros,total);
}