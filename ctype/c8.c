#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'a';

    if (islower(caracter)) {
        printf("%c es una letra minúscula.\n", caracter);
    } else {
        printf("%c no es una letra minúscula.\n", caracter);
    }

    return 0;
}
