#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = '!';

    if (ispunct(caracter)) {
        printf("%c es un carácter de puntuación.\n", caracter);
    } else {
        printf("%c no es un carácter de puntuación.\n", caracter);
    }

    return 0;
}
