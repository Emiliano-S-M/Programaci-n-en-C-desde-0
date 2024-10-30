#include <stdio.h>

void miFuncion(int *a) {
    *a = *a * 2;
    printf("Dentro de la función: %d\n", *a);
}

void main(void) {
    int a = 5;
    printf("Antes de llamar a la función: %d\n", a);
    miFuncion(&a);
    printf("Después de llamar a la función: %d\n", a);
    getchar();
}
