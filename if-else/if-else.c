#include <stdio.h>

void main(void){
    float PRO;

    printf("Ingrese el promedio del alumno: \n");
    scanf("%f", &PRO);

    if(PRO>=6){
        printf("\nAprobado");
    }else{
        printf("\nReprobado");
    }

    getchar();
    getchar();
}