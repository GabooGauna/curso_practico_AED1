#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//definir tipo de dato personalizado
typedef char tString[15]; 

//prototipos
void pedirPalabra(tString);
bool esPalindromo(tString);
void mostrarResultadoPalindromo();

//invocacion
int main(){
	mostrarResultadoPalindromo();
	return 0;
}

//desarrollo de funciones
void pedirPalabra(tString palabra){
	printf("Ingrese una palabra para saber si es palindromo:\n");
	scanf( " %14[^\n]", palabra); //evita overflow
}


bool esPalindromo(tString palabra){
	int i;
	int longitud = strlen(palabra);
	tString palabraAlReves;
	int j = 0;
	
	for(i = longitud -1; i >= 0; i--){
		palabraAlReves[j] = palabra[i];
		j++;
	}
	
	palabraAlReves[j] = '\0';
	
	return strcmp(palabraAlReves, palabra) == 0;
}

void mostrarResultadoPalindromo(){
	tString palabra;
	pedirPalabra(palabra);
	
	(esPalindromo(palabra)) ? printf("En la palabra ingresada es un palindromo!") : printf("En la palabra ingresada no es un palindromo!");
	
}