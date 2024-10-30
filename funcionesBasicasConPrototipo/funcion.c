#include <stdio.h>

int suma(int a, int b); /* Prototipo de la funcion */

void main(void) {
    int x = 5;
    int y = 3;
    int z = suma(x, y);
    printf("La suma de %d y %d es: %d\n", x, y, z);

    getchar();
}

int suma(int a, int b) {  /* Definicion de la funcion */
    int resultado = a + b;
    return resultado;
}