/*
Un supermercado cuenta con el importe total facturado en cada mes del año 2023 en sus 6 sucursales.
Desea conocer el mayor monto de venta y a qué sucursal corresponde.
*Nota:
- Utilizar una matriz para almacenar los totales facturados para luego obtener lo requerido. 
*/

#include <stdio.h>
#define MES 3
#define SUCURSAL 2

typedef char tString[15];

void ingresarDatos(float totalFacturado[][SUCURSAL], tString meses[]);
void mayorMonto(float totalFacturado[][SUCURSAL], tString meses[]);

int main(){
	float totalFacturado[MES][SUCURSAL];
	tString meses[MES] = {"Enero", "Febrero", "Marzo"};
	
	ingresarDatos(totalFacturado, meses);
	mayorMonto(totalFacturado, meses);
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

void mayorMonto(float totalFacturado[][SUCURSAL], tString meses[]){
	float mayor = totalFacturado[0][0];
	int mes = 0;
	int sucursal = 0;
	
	for(int i = 0; i < MES; i++){
		for(int j = 0; j < SUCURSAL; j++){
			if(totalFacturado[i][j] > mayor){
				mayor = totalFacturado[i][j];
				mes = i;
				sucursal = j;
			}
		}
	}
	printf("mayor venta: %.2f en la sucursal %d correspondiente al mes %s", mayor, sucursal + 1, meses[mes]);
}