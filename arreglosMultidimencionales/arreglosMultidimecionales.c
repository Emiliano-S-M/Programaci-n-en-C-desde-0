#include <stdio.h>

void main(void){
    int miArreglo[4][5][6][7];
    int contador = 1;

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            for(int k = 0 ; k < 6 ; k++){
                for(int l = 0 ; l < 7 ; l++){
                    miArreglo[i][j][k][l] = contador;
                    contador++;
                }
            }
        }
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            for(int k = 0 ; k < 6 ; k++){
                for(int l = 0 ; l < 7 ; l++){
                    printf("[%i][%i][%i][%i] %i\n", i, j, k, l, miArreglo[i][j][k][l]);
                }
            }
        }
    }
}