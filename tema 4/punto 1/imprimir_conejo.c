#include <stdio.h>
//------  PROTOTIPOS  ------
void imprimirCabezaConejo();
void imprimirCuerpoConejo();
void imprimirConejo();

//------  INVOCACION  ------
int main(){
	imprimirConejo();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void imprimirConejo(){
	imprimirCabezaConejo();
	imprimirCuerpoConejo();
}

void imprimirCabezaConejo(){
	printf("(\\__/)\n(>'.'<)\n");
}


void imprimirCuerpoConejo(){
	printf("(\")_(\")");
}