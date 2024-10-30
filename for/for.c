
#include <stdio.h>

void main(void){
    float NOM = 0, SAL = 0;
    int I;


    for(I = 1; I<= 15; I++){
        printf("\tIngrese el salario del profesor:\n\t");
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }

    printf("\n\tEl total de la nomina es de: %.2f \n", NOM);

    getchar();
    getchar();
}