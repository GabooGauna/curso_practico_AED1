/*#include <stdio.h>

void multiplicarPor10(int);

int main() {
    multiplicarPor10(20,5);

    return 0;
}

void multiplicarPor10(int pNro){
    printf("El resultado es: %d \n\n", pNro * 10);
}*/

//a) ¿Por qué no compila?
//el programa no compila porque se le esta pasando dos argumentos cuando al realizar el prototipo solo se le asigno un parametro

//b) Corregir el programa y que devuelva el valor correcto

#include <stdio.h>

void multiplicarPor10(int);

int main() {
    multiplicarPor10(20);
    return 0;
}

void multiplicarPor10(int pNro){
    printf("El resultado es: %d \n\n", pNro * 10);
}