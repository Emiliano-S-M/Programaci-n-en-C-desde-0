#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = ' ';

    if (isspace(caracter)) {
        printf("%c es un espacio en blanco.\n", caracter);
    } else {
        printf("%c no es un espacio en blanco.\n", caracter);
    }

    return 0;
}
