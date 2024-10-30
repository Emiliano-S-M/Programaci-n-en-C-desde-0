#include <stdio.h>

void main(void){
    float PAG, SPA = 0;
    printf("\n\tIngrese el primer pago:\t");
    scanf("%f", &PAG);
    
    do
    {
    SPA = SPA + PAG;
    printf("\tIngrese el siguiente pago:\t ");
    scanf("%f", &PAG);
    }
    while (PAG);
    printf("\n\tEl total de pagos del mes es: %.2f", SPA);

    getchar();
    getchar();
}