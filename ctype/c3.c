#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'A';

    if (isascii(caracter)) {
        printf("%c está en el rango ASCII.\n", caracter);
    } else {
        printf("%c no está en el rango ASCII.\n", caracter);
    }

    return 0;
}
