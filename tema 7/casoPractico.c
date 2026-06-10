#include <stdio.h>
#include <string.h>
#define MAXCHAR 51
#define MESES 3
#define DIAS 5

typedef char tString[MAXCHAR];
void ingresarDatos(int interacciones[][DIAS], tString mes[MESES], tString titulo);
void promedioInteracciones(int interacciones[][DIAS], float promedioPorMes[MESES]);

int main(){
	int interacciones[MESES][DIAS];
	tString titulo;
	float promedioPorMes[MESES];
	
	
	tString mes[MESES] = {"Enero", "Febrero", "Marzo"};
	
	return 0;
}

void ingresarDatos(int interacciones[][DIAS], tString mes[MESES], tString titulo){
	do{
		printf("Ingrese el titulo del informe (Max. 50 caracteres):\n");
		fgets(titulo, MAXCHAR, stdin);
		
		if(strchr(titulo, '\n') == NULL){
			printf("El titulo excede los caracteres declarados.");
		}
		else{
			titulo[strcspn(titulo, "\n")] = '\0';
		}
		
	}while(strchr(titulo, '\n') == NULL);
	
	for(int i = 0; i < MESES; i++){
		printf("\nInteracciones Mes: %s\n", mes[i]);
		for(int j = 0; j < DIAS; j++){
			printf("Ingrese las interacciones del dia: %d\n", j + 1);
			scanf("%d", &interacciones[i][j]);
		}
	}
}
