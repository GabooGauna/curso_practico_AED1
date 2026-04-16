#include <stdio.h>

//------  VARIABLES GLOBALES  ------
int numeroEnteroDeUsuario; 


//------  PROTOTIPOS  ------
//funcion contenedora
void operacionesMatematicas();
//a) Una funcion que devuelva la mitad de un numero
void mitadDeUnNumero(int);
//b) Una funcion que devuelva el doble de un numero
int dobleDeUnNumero(int);
//c) Una funcion que devuelva el triple de un numero 
void tripleDeUnNumero(int);
//d) Una funcion que devuelva el anterior de un numero que recibe
void anteriorDeUnNumero(int);
//e) Una funcion que devuelva el posterior de un numero que recibe
int posteriorDeUnNumero(int);
//f) Una funcion que solicite al usuario ingresar un numero entero y muestre en pantalla los resultados de aplicar todas las funciones anteriores sobre ese valor.
void ingresarNumero();
//3.3 Una funcion de devuelva el posterior del doble de un numero
int posteriorDelDobleDe(int);

//------  INVOCACION  ------
int main(){
	operacionesMatematicas();
	return 0;
}


//------  DESARROLLO  ------
//funcion contenedora
void operacionesMatematicas(){
	ingresarNumero();
	mitadDeUnNumero(numeroEnteroDeUsuario);
	dobleDeUnNumero(numeroEnteroDeUsuario);
	tripleDeUnNumero(numeroEnteroDeUsuario);
	anteriorDeUnNumero(numeroEnteroDeUsuario);
	posteriorDeUnNumero(numeroEnteroDeUsuario);
	posteriorDelDobleDe(numeroEnteroDeUsuario);
}
//a
void mitadDeUnNumero(int n){
	int resultado = n / 2; 
	printf("La mitad de %d es %d \n", n, resultado);
}

//b
int dobleDeUnNumero(int n){
	int resultado = n * 2; 
	printf("El doble de %d es %d \n", n, resultado);
	return resultado;
}

//c
void tripleDeUnNumero(int n){
	int resultado = n * 3;
	printf("El triple de %d es %d \n", n, resultado);
}

//d
void anteriorDeUnNumero(int n){
	int resultado = n - 1;
	printf("El numero anterior de %d es %d \n", n, resultado);
}

//e
int posteriorDeUnNumero(int n){
	int resultado = n + 1;
	printf("El numero posterior de %d es %d \n", n, resultado);
	return resultado;
}

//f
void ingresarNumero(){
	printf("#### Ingrese un numero entero #### \n-- ");
	scanf("%d", &numeroEnteroDeUsuario);
}

//3.3
int posteriorDelDobleDe(int n){
	int doble = dobleDeUnNumero(n);
	return posteriorDeUnNumero(doble);
}