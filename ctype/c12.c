#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'A';

    if (isupper(caracter)) {
        printf("%c es una letra mayúscula.\n", caracter);
    } else {
        printf("%c no es una letra mayúscula.\n", caracter);
    }

    return 0;
}
