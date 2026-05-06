/*
OBJETIVO:
Determinar la situación académica de un alumno (Promoción, Regular o Libre)
en base a sus notas y validando que posea libreta universitaria.

ESTRATEGIA:
Solicitar datos del alumno (nombre, libreta y notas), verificar si puede rendir,
evaluar si aprueba cada examen y calcular el promedio para definir su condición final.

MODULOS:
- alumno(): solicita los datos y coordina el proceso.
- estadoAlumno(): muestra los datos y determina la situación académica.
- aprobado(): verifica si una nota es aprobada.
- promedio(): calcula el promedio de las notas.
*/

#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#define FILAESTRELLAS "********************************"

//------  PROTOTIPOS  ------
float promedio(float, float);
void alumno();
void estadoAlumno(float,float,char[50],char,int);
bool aprobado(float);

//------  VARIABLES GLOBALES  ------


//------  INVOCACION  ------
int main(){
	alumno();
	return 0;
}

//funcion principal 
void alumno(){
	float notaPrimerParcial;
	float notaSegundoParcial;
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
	
	 if (libreta == 'n' || libreta == 'N'){
			printf("No puede rendir examen por no tener libreta universitaria.");
			return;
	}
	//numero de la libreta universitaria
	printf("Ingrese los 6 numeros de su libreta universitaria: \n");
	scanf("%d", &libretaUniversitaria);
	fflush(stdin);
	//nota primer parcial
	printf("Ingrese la nota del primer parcial: \n");
	scanf("%f", &notaPrimerParcial);
	fflush(stdin);
	
	//nota segundo parcial
	printf("Ingrese la nota del segundo parcial: \n");
	scanf("%f", &notaSegundoParcial);
	fflush(stdin);
	
	estadoAlumno(notaPrimerParcial,notaSegundoParcial,alumno,libreta,libretaUniversitaria);
	
}

//mouestra datos y condicion del alumno
void estadoAlumno(float n1,float n2,char nombreA [50],char libreta,int libretaUnivtaria){
	system("cls");
	printf("%s\n", FILAESTRELLAS);
	printf(" Alumno: %s\n",nombreA);
	printf(" Numero de libreta: %d\n",libretaUnivtaria);
	printf(" Nota del primer parcial: '%.2f'\n",n1);
	printf(" Nota del segundo parcial: '%.2f'\n",n2);
	printf(" Situacion: ");
	if ( aprobado( n1 ) && aprobado( n2 ) && promedio( n1, n2 ) >= 7){
		printf("'Promociono'\n");
		printf(" Nota final: %.2f\n", promedio( n1, n2 ));
	}else if ( aprobado( n1 ) && aprobado( n2 ) ){
		printf("'Regularizo'\n");
	}else{
		printf("'Libre'\n");
	}
	printf("%s", FILAESTRELLAS);

}

//retorna un bool si aprobo el examen
bool aprobado(float nota){
	return nota >= 6.0;
}

//calcular promedio de ambos examenes
float promedio(float exam1, float exam2){
	return (exam1 + exam2) / 2;
}