#include <stdio.h>

void main(void){

    int A, B, C, D;
    printf("Ingresa cuatro datos de tipo entero: \n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("\nLos datos ingresados son: \n");
    printf("\nEn el mismo orden: %d %d %d %d", A, B, C, D);
    printf("\nEn orden inverso: %d %d %d %d", D, C, B, A);
    printf("\nAlternados: %d %d %d %d", B, D, A, C);

    getchar();
    getchar();
}