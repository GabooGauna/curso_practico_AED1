#include <stdio.h>

///------  PROTOTIPOS  ------
void intercambiar(double *ptr1, double *ptr2); //usamos * para indicar que recibimos punteros.
void resultadoIntercambio();

//------  VARIABLES GLOBALES  ------
double n1, n2;

//------  INVOCACION  ------
int main() {
    resultadoIntercambio();
    return 0;
}

//------  DESARROLLO  ------
//funcion contenedora
void resultadoIntercambio(){
    printf("Ingrese el valor del primer numero: ");
    scanf("%lf", &n1);
    printf("Ingrese el valor del segundo numero: ");
    scanf("%lf", &n2);
    printf("\nAntes del intercambio:\nPrimer numero = %.2lf\nSegundo numero = %.2lf\n", n1, n2);
    // Llamamos a la función pasando las DIRECCIONES con &
    intercambiar(&n1, &n2);
    printf("Despues del intercambio:\nPrimer numero = %.2lf\nSegundo numero = %.2lf\n", n1, n2);
}

void intercambiar(double *ptr1, double *ptr2) {
    double aux;
    // 1. Guardamos el VALOR que hay en la dirección ptr1
    aux = *ptr1;
    // 2. Ponemos el VALOR de la dirección ptr2 en la dirección ptr1
    *ptr1 = *ptr2;
    // 3. Ponemos el valor guardado en el auxiliar en la dirección ptr2
    *ptr2 = aux;
}