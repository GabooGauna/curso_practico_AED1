#include <stdio.h>
#define MES 3
#define SUCURSAL 2

typedef char tString[15];

void ingresarDatos(float totalFacturado[][SUCURSAL], tString meses[]);
void sumarVentas(float totalFacturado[][SUCURSAL], float ventasAnuales[]);
void mostrarResultado(float totalFacturado[][SUCURSAL], float ventasAnuales[], tString meses[]);

int main(){
	float totalFacturado[MES][SUCURSAL];
	float ventasAnuales[SUCURSAL];
	tString meses[MES] = {"Enero", "Febrero", "Marzo"};
	
	ingresarDatos(totalFacturado, meses);
	sumarVentas(totalFacturado, ventasAnuales);
	mostrarResultado(totalFacturado, ventasAnuales, meses);
	return 0;
}

void ingresarDatos(float totalFacturado[][SUCURSAL], tString meses[]){
	for(int i = 0; i < MES; i++){
		for(int j = 0; j < SUCURSAL; j++){
			printf("Sucursal: %d\n", j + 1);
			printf("Ingresar monto correspondiente al mes %s\n", meses[i]);
			scanf("%f", &totalFacturado[i][j]);
		}
	}
}

void sumarVentas(float totalFacturado[][SUCURSAL], float ventasAnuales[]){
	for(int j = 0; j < SUCURSAL; j++){
		float acumulador = 0;
		for(int i = 0; i < MES; i++){
			acumulador += totalFacturado[i][j];
		}
		
	ventasAnuales[j] = acumulador;
	}
}

void mostrarResultado(float totalFacturado[][SUCURSAL], float ventasAnuales[], tString meses[]){
	for(int j = 0; j < SUCURSAL; j++){
		printf("Ventas por mes sucursal numero %d\n", j + 1);
		for(int i = 0; i < MES; i++){
			printf("%s: %.2f\n", meses[i], totalFacturado[i][j]);
		}
		printf("Total anual: %.2f\n\n", ventasAnuales[j]);
	}
}