#include <stdio.h>
//------  PROTOTIPOS  ------
void imprimirParteSuperiorPie();
void imprimirParteInferiorPie();
void imprimirMensaje();
void imprimirHuella();

//------  INVOCACION  ------
int main (){
	imprimirHuella();
	return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void imprimirHuella(){
	imprimirMensaje();
	imprimirParteSuperiorPie();
	imprimirParteInferiorPie();
};

void imprimirMensaje(){
	printf("Dejemos una huella :)\n");
}

void imprimirParteSuperiorPie(){
	printf(" ooo0 \n(....)\n");
}

void imprimirParteInferiorPie(){
	printf(" ...( \n  ._)");
}