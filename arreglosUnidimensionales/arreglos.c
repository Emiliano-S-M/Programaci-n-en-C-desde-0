#include <stdio.h>

void main(void){
    int miArreglo[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("\n\tIngrese el numero a almacenar: ");
        scanf("%i", &miArreglo[i]);
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("\n\t%i", miArreglo[i]);
    }

    getchar();
    getchar();
}