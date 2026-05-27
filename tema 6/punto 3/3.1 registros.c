#include <stdio.h>
#include <string.h>

int main(){
	struct
	{
		long dni;               //4 bytes
		char nombre[50];        //50 bytes
		char apellido[50];      //50 bytes
		short edad;             //2 bytes
		short codLocalidad;     //2 bytes
		short codCarrera;       //2 bytes
		                        //total: 110 bytes
	}alumno;
	
	//asignacion de valores
	alumno.dni = 42740582;
	strcpy(alumno.nombre, "Cesar Gabriel");
	strcpy(alumno.apellido, "Gauna");
	alumno.edad = 25;
	alumno.codLocalidad = 1;
	alumno.codCarrera = 14;
	
	printf("--- DATOS DEL ALUMNO SIU GUARANI ---\n");
    printf("DNI: %ld\n", alumno.dni);
    printf("Apellido y Nombre: %s, %s\n", alumno.apellido, alumno.nombre);
    printf("Edad: %hd anos\n", alumno.edad);
    printf("Codigo de Localidad: %hd\n", alumno.codLocalidad);
    printf("Codigo de Carrera: %hd\n", alumno.codCarrera);
    printf("------------------------------------\n");
	
	return 0;
}