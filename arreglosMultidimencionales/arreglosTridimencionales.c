#include <stdio.h>

void main(void){

    int miArreglo[4][5][6];
    int contador = 1;

    for(int i = 0 ; i < 4 ; i++){
         for(int j = 0 ; j < 5 ; j++){
             for(int k = 0 ; k < 6 ; k++){
                miArreglo[i][j][k] = contador;
                contador++;
            }
        }
    }

    for(int i = 0 ; i < 4 ; i++){
         for(int j = 0 ; j < 5 ; j++){
             for(int k = 0 ; k < 6 ; k++){
                printf("miArreglo[%i][%i][%i] %i\n",i, j, k, miArreglo[i][j][k]);
            }
        }
    }
}