#include <stdio.h>

void main(void){

    float PAG, SPA = 0;
    printf("\n\tIngrese el primer pago:\n\t");
    scanf("%f", &PAG);
    while (PAG != 0)
    {
    SPA = SPA + PAG;
    printf("\tIngrese el siguiente pago:\t ");
    scanf("%f", &PAG);
    }
    printf("\n\tEl total de pagos del mes es: %.2f", SPA);

    getchar();
    getchar();
}