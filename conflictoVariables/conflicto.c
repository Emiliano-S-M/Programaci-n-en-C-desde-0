#include <stdio.h>

// Variable global
int global_I = 100;

void miFuncion() {
    // Variable local
    int I = 50;
    
    // Imprimir la variable local
    printf("Variable local I: %d\n", I);
    
    // Imprimir la variable global
    printf("Variable global I: %d\n", global_I);
}

void main(void) {
    miFuncion();
     getchar();
}
