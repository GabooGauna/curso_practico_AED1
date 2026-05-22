#include <stdio.h>
#include <string.h>
#include <ctype.h>

//definir tipo de dato personalizado
typedef char tString[100]; 

//prototipos
void pedirFrase(tString);
char pedirVocal();
int contarVocal(tString, char);
void mostrarConteoVocales();

//invocacion
int main(){
	mostrarConteoVocales();
	return 0;
}

//desarrollo de funciones
void pedirFrase(tString frase){
	printf("Ingrese una frase:\n");
	scanf( " %99[^\n]", frase); //evita overflow
}

char pedirVocal(){
	char vocal;
	printf("Ingrese la vocal que desea contar:\n");
	scanf( " %c", &vocal);
	fflush(stdin);
	return vocal;
}

int contarVocal(tString frase, char vocal){
	int i = 0;
	int contador = 0;
	
	while(frase[i] != '.' && frase[i] != '\0'){
		if(frase[i] == vocal){
			contador ++;
		}
		i++;
	}
	return contador;
}

void mostrarConteoVocales(){
	tString frase;
	pedirFrase(frase);
	
	char vocal = pedirVocal();
	
	int cantidadVocal = contarVocal(frase, vocal);
	
	printf("la vocal %c aparece %d veces en la frase ingresada.", vocal, cantidadVocal);
}