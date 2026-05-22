#include <stdio.h>
#include <string.h>
#include <ctype.h>

//definir tipo de dato personalizado
typedef char tString[200]; 

//prototipos
void pedirTitulo(tString titulo);
void convertirMayusculas(tString titulo);
int contarPalabras(tString titulo);
void mostrarTitulo();

//invocacion
int main(){
	mostrarTitulo();
	return 0;
}

//desarrollo de funciones
void pedirTitulo(tString titulo){
	printf("Ingrese un Titulo que termine con un punto final (.) y contenga como maximo 20 palabras\n");
	scanf( "%199[^\n]", titulo); //evita overflow
}

void convertirMayusculas(tString titulo){
	int i;
	
	for(i = 0; titulo[i] != '\0'; i++){ //continua la ejecucion hasta el caracter nulo
		titulo[i] = toupper(titulo[i]);
	}
}

int contarPalabras(tString titulo){
	int i;
	int palabras = 1;
	
	for(i = 0; titulo[i] != '.'; i++){
		if(titulo[i] == ' '){
			palabras ++;
		}
	}
	
	return palabras;
}

void mostrarTitulo(){
	tString titulo;
	int cantidadPalabras;
	
	pedirTitulo(titulo);
	convertirMayusculas(titulo);
	cantidadPalabras = contarPalabras(titulo);
	
	if(cantidadPalabras > 20){
		printf("El titulo excede la cantidad de palabras permitidas.");
		return;
	}
	else{
		printf("El titulo en mayusculas:\n%s\n", titulo);
		printf("La cantidad de palabras que contiene el titulo es de: %d\n", cantidadPalabras);
		printf("El titulo no excede con el limite de 20 palabras.");
	}
}