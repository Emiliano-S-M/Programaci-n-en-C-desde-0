#include <stdio.h>

void main(void){
    int miArreglo[5][4];
    int contador = 1;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0; j < 4 ; j++){
            miArreglo[i][j] = contador;
            contador++;
        }
    }

    int (*p)[4] = miArreglo;

    int primerElemento = p[0][0];
    int ultimoElemento = p[4][3];

    printf("Este es el primer elemento %i \n", primerElemento);
    printf("Este es el ultimo elemento %i \n", ultimoElemento);

    int elementoModificable = p[3][2];

    printf("\nElemento p[3][2] antes de modificarlo: %i\n", elementoModificable);

    p[3][2] = p[3][2] * 2;

    elementoModificable = p[3][2];
    
    printf("Elemento p[3][2] Modificado: %i\n", elementoModificable);

    //Modificacion Usando punteros a Enteros


    int *q = &miArreglo[0][0];

    int primerValor = *(q + 0 * 4 + 0);
    printf("\nValor de la primera casilla usando Punteros a Enteros: %i", primerValor);

    //Modificacion de elementos usando punteros a Enteros

    int segundoValor = *(q + 0 * 4 + 1);
    printf("\nValor de la segunda casilla antes de modificarla: %i", segundoValor);

    *(q + 0 * 4 + 1) = 50;
    segundoValor = *(q + 0 * 4 + 1);

    printf("\nValor de la segunda casilla modificada usando Punteros a Enteros: %i", segundoValor);

    getchar();

}