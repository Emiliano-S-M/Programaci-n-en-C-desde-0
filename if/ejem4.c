#include <stdio.h>

int main() {
    int numero = 10;

    if (numero < 0 || (numero >= 10 && numero <= 20)) {
        printf("El número es negativo o está entre 10 y 20.\n");
    }

    return 0;
}


/*

Aquí, el mensaje "El número es negativo o está entre 10 y 20" se imprimirá si el número es
negativo o si está entre 10 y 20. Si ninguna de estas condiciones se cumple, el mensaje no
se imprimirá.

*/