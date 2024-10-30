#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'A';

    if (isalpha(caracter)) {
        printf("%c es una letra.\n", caracter);
    } else {
        printf("%c no es una letra.\n", caracter);
    }

    return 0;
}
