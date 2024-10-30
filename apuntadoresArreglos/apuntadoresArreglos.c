#include <stdio.h>

void main(void){

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    printf("\n\tEste es el valor de *ptr: %i", *ptr);
    printf("\n\tEste es el valor del tercer elemento de *ptr: %i\n\n", *(ptr+3));

    for(int i = 0 ; i < 5 ; i++){
        printf("\n\tEl valor de *ptr en el ciclo %i es: %i",i, *(ptr + i));
    }

    *(ptr + 2) = 15;
    
    printf("\n\n"); /*Esto, aunque no est en el diagrama de flujo,
    es para que sea mas facil de leer en consola*/

    for(int i = 0 ; i < 5 ; i++){
        printf("\n\tEl valor de *ptr en el ciclo %i es: %i",i, *(ptr + i));
    }
    
    getchar();
    getchar();
}