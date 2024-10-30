#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0 && numero % 2 == 0) {
        printf("El número es positivo y par.\n");
    }

    return 0;
}

/*

Aquí, el mensaje "El número es positivo y par" solo se imprimirá si el número es mayor
que cero y también es divisible entre 2. Si alguna de estas condiciones no se cumple, 
el mensaje no se imprimirá.

*/