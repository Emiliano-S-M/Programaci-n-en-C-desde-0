#include <stdio.h>

void main(void){
    int miArreglo[5][4];
    int contador = 1;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            miArreglo[i][j] = contador;
            contador++;
        }
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("\n");
        for(int j = 0 ; j < 4 ; j++){
           printf("\t%d", miArreglo[i][j]);
        }
    }

    getchar();
}