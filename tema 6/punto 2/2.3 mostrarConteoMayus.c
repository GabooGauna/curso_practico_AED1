#include <stdio.h>
#include <string.h>
#include <ctype.h>

//definir tipo de dato personalizado
typedef char tString[100]; 

//prototipos
void pedirFrase(tString);
int contarMayus(tString);
void mostrarConteoMayus();

//invocacion
int main(){
	mostrarConteoMayus();
	return 0;
}

//desarrollo de funciones
void pedirFrase(tString frase){
	printf("Ingrese una frase:\n");
	scanf( " %99[^\n]", frase); //evita overflow
}


int contarMayus(tString frase){
	int i = 0;
	int contador = 0;
	
	while(frase[i] != '.' && frase[i] != '\0'){
		if(frase[i] >= 65 && frase[i] <= 90){
			contador ++;
		}
		i++;
	}
	return contador;
}

void mostrarConteoMayus(){
	tString frase;
	pedirFrase(frase);
	
	int cantidadMayus = contarMayus(frase);
	
	printf("En la frase ingresada se encuentran %d mayusculas.", cantidadMayus);
}