#include <stdio.h>
#define GUIONES "--------------------"

//------  PROTOTIPOS  ------
void ingresarDatos();
void tabla(int);
void mostrarTabla();

//------  VARIABLES GLOBALES  ------
int numero;

//------  INVOCACION  ------
int main(){
	mostrarTabla();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void mostrarTabla(){
	ingresarDatos();
	
	printf("%s\n", GUIONES);
	printf("Tabla del %d\n", numero);
	printf("%s\n", GUIONES);
	
	tabla(numero);
}

void ingresarDatos(){
	printf("Ingrese un numero para realizar la tabla:\n)- ");
	scanf("%d", &numero);
}

void tabla(int num){
	int i;
	int multiplicar;
	for(i = 0; i <= 10; i++){
		multiplicar = num * i;
		printf("%d x %d = %d \n",num, i, multiplicar);
	}
}