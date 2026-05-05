/*	
	OBJETIVO: Determinar el estado académico de un alumno (Promoción, Regular o Libre)
              según sus notas y verificar si posee libreta universitaria.
    
    ESTRATEGIA:
			  Solicitar los datos del alumno, validar si tiene libreta, pedir notas,
              calcular el promedio y determinar su condición final.
              
    MODULOS:
			- datosDeAlumno(): solicita nombre y verifica libreta.
			- promedio(): calcula el promedio de dos notas.
			- regularidad(): determina el estado (P, R, L).
			- estadoAlumno(): coordina el proceso general del programa.
*/

#include <stdio.h>
#define FILAESTRELLAS "********************************"

//------  PROTOTIPOS  ------
char datosDeAlumno();
double promedio(double, double);
char regularidad(double, double);
void estadoAlumno();

//------  VARIABLES GLOBALES  ------


//------  INVOCACION  ------
int main(){
	estadoAlumno();
	return 0;
}

//------  DESARROLLO  ------
//pedir datos del alumno
char datosDeAlumno(){
	char libreta; // si posee o no libreta universitaria
	char alumno[50];  //nombre alumno
	int libretaUniversitaria; //numero de libreta univ
	
	//pedir nombre de alumno
	printf("%s\n", FILAESTRELLAS);
	printf("Nombre del alumno: \n");
	scanf("%[^\n]s", alumno);
	fflush(stdin);
	
	//preguntar si tiene libreta
	printf("Tiene libreta universitaria?: \n");
	printf("S- Si\nN- No\n");
	scanf("%c", &libreta);
	fflush(stdin);
	
	//preguntar numero de libreta universitaria y validar
	if(libreta == 's' || libreta == 'S'){
	printf("Ingrese los 6 numeros de su libreta universitaria: \n");
	scanf("%d", &libretaUniversitaria);
	fflush(stdin);
	}
	return libreta;
}

//calcular promedio de ambos examenes
double promedio(double exam1, double exam2){
	double promedioFinal = (exam1 + exam2) / 2;  
	return promedioFinal;
}

//verificar estado de regularidad del alumno
char regularidad(double exam1, double exam2){
	double promedioFinal = promedio(exam1,exam2); 
	char regular;
	if(promedioFinal >= 7){
		regular = 'P';
	}
	else if(exam1 >= 6 && exam2 >= 6){
		regular = 'R';
	}
	else if(exam1 < 6 || exam2 < 6){
		regular = 'L';
	}
	else{
		printf("Error en el tipo de dato, intentelo mas tarde.\n");
	}
	return regular;
}

//funcion principal 
void estadoAlumno(){
	double notaPrimerParcial;
	double notaSegundoParcial;
	
	//validar estado de libreta
	char libreta;
	libreta = datosDeAlumno();
	if(libreta == 'n' || libreta == 'N'){
		printf("No puede rendir examen por no tener libreta universitaria.");
		return;
	}
	else{
		
	//aclaracion regularidad
	printf("%s\n", FILAESTRELLAS);
	printf("Los estados para cada alumno son los siguientes:\n");
	printf("P - Promocion\nR - Regular\nL - Libre\n\n\n");
	
	//nota primer parcial
	printf("Ingrese la nota del primer parcial: \n");
	scanf("%lf", &notaPrimerParcial);
	fflush(stdin);
	
	//nota segundo parcial
	printf("Ingrese la nota del segundo parcial: \n");
	scanf("%lf", &notaSegundoParcial);
	fflush(stdin);
	
	//promedio final
	double promedioFinal = promedio(notaPrimerParcial,notaSegundoParcial);
	printf("El promedio final es de: %.2lf\n", promedioFinal);
	
	//mostrar estado de regularidad
	printf("El estado de regularidad es: %c\n", regularidad(notaPrimerParcial, notaSegundoParcial));
	printf("%s\n", FILAESTRELLAS);
	}
}

/*
CASOS DE PRUEBA:

1)
Libreta: N
Resultado esperado:
No puede rendir examen por no tener libreta universitaria.

2)
Libreta: S
Notas: 8 y 7
Promedio: 7.5
Resultado esperado: P (Promoción)

3)
Libreta: S
Notas: 6 y 6
Promedio: 6
Resultado esperado: R (Regular)

4)
Libreta: S
Notas: 5 y 7
Promedio: 6
Resultado esperado: L (Libre)
*/