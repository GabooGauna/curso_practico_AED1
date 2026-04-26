#include <stdio.h>
///------  PROTOTIPOS  ------
void aplicarDescuento(float *pPrecio);

//------  INVOCACION  ------
int main() {
    float precio = 1000.00;
    aplicarDescuento(&precio);
    printf("Precio con descuento: %.2f\n", precio);
    return 0;
}

//------  DESARROLLO  ------
void aplicarDescuento(float *pPrecio) {
    *pPrecio = (*pPrecio) * 0.90;
}