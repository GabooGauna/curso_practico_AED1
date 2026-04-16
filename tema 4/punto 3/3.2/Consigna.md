### 3.2. Depuración de Código

**Consigna:** Copiar el siguiente código, analizarlo y responder a las preguntas planteadas.

```c
#include <stdio.h>

void multiplicarPor10(int);

int main() {
    multiplicarPor10(20,5);

    return 0;
}

void multiplicarPor10(int pNro){
    printf("El resultado es: %d \n\n", pNro * 10);
}
```

**Preguntas de análisis:**

- **a) ¿Por qué no compila?**
- **b) Corregir el programa y que devuelva el valor correcto.**
