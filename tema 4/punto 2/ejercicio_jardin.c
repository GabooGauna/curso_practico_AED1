/* objetivo: mostrar en pantalla la cantidad de figuras y la superficie total que se debe cubrir */
/* estrategia: 1.ingresoDeDatos: se pide al usuario la cantidad de figuras y el radio.
			   2.calcularArea: calcular el area de un circulo teniendo en cuenta la formula pi * (radio * radio).
			   3.Guardar el retorno de calcularArea en la variable superficieTotal y multiplicar por la cantidad de figuras ingresadas por el usuario.
			   4.Mostrar por pantalla el resultado final.
 */
#include <stdio.h>

//------  VARIABLES GLOBALES  ------
int cantidadDeFiguras;
float radio;
float superficieTotal;

//------  PROTOTIPOS  ------
void ingresoDeDatos();
float calcularArea(float);
void pintarFiguras();

//------  INVOCACION  ------

int main(){
    pintarFiguras();
    return 0;    
}

//------  DESARROLLO  ------
//funcion contenedora
void pintarFiguras(){
	ingresoDeDatos();
    superficieTotal = calcularArea(radio) * cantidadDeFiguras;
    printf("La cantidad de figuras son: %d\nLa superficie a cubrir es de: %.2f", cantidadDeFiguras, superficieTotal);
}
void ingresoDeDatos(){
    printf("##### Ingrese la cantidad de figuras ##### \n- ");
    scanf("%d", &cantidadDeFiguras);
    fflush(stdin);
    printf("##### Ingrese el valor del radio ##### \n- ");
    scanf("%f", &radio);
}

float calcularArea(float r){
    float areaDeUnCirculo;
    areaDeUnCirculo = 3.14 * (r * r);
    return areaDeUnCirculo;
}
