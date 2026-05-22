/*
2.1 Para emitir los certificados de aprobación de un curso de Python, se dispone de una planilla en la que se
informan en columnas diferentes el nombre y el apellido de los participantes. Escribir un programa que
lea dos datos correspondientes al nombre y apellido, respectivamente. Utilice una función que reciba
como parámetro el nombre y el apellido y concatene en una sola cadena el apellido y nombre, separados
por coma. Mostrar en pantalla la nueva cadena y la longitud de esta. El programa termina cuando el
usuario indique una condición de fin de ingreso de datos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

//variables globales
typedef char tString[50];
tString nombre;
tString apellido;
tString nombreCompleto;

//prototipos
void pedirDatos();
void concatNombreYApellido(tString, tString);
void mostrarCadena();
char terminarProceso();

//invocacion
int main(){
	mostrarCadena();
	return 0;
}

//desarrollo de funciones
void pedirDatos(){
	printf("Ingrese su nombre:\n- ");
	scanf(" %[^\n]", &nombre);
	
	printf("Ingrese su apellido:\n- ");
	scanf(" %[^\n]", &apellido);
}

void concatNombreYApellido(tString nomb, tString apell){
	strcat(apell, ", ");
	strcat(apell, nomb);
	strcpy(nombreCompleto, apell);
}

void mostrarCadena(){
	char continuar = terminarProceso();
	
	while(continuar == 'S'){
		pedirDatos();
		concatNombreYApellido(nombre, apellido);
		printf("El nombre y apellido es: %s\n", nombreCompleto);
		printf("La longitud de la cadena es %lu\n",strlen(nombreCompleto));
		continuar = terminarProceso();
		system("cls");
	}	
}

char terminarProceso(){
	char continuar;
	printf("Desea seguir ingresando datos? (S/N):\n");
	scanf(" %c", &continuar);
	return toupper(continuar);
}