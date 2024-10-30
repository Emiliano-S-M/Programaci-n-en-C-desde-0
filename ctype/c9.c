#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = ' ';

    if (isprint(caracter)) {
        printf("%c es un carácter imprimible.\n", caracter);
    } else {
        printf("%c no es un carácter imprimible.\n", caracter);
    }

    return 0;
}
