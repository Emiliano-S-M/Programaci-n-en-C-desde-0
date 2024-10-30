#include <stdio.h>

void main(void){
    int B, H, A;

    printf("Ingrese la base y la altura del rectangulo: \n");
    scanf("%d %d", &B, &H);

    A = B * H;

    printf("\nEl area del rectangulo es: %i", A);

    getchar();
    getchar();
}