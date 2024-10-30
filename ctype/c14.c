#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'A';

    printf("El valor ASCII de %c es %d.\n", caracter, toascii(caracter));

    return 0;
}
