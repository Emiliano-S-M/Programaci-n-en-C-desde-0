#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = ' ';

    if (isblank(caracter)) {
        printf("%c es un espacio en blanco o tabulación.\n", caracter);
    } else {
        printf("%c no es un espacio en blanco o tabulación.\n", caracter);
    }

    return 0;
}
