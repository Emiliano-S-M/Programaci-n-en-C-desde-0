#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = '7';

    if (isalnum(caracter)) {
        printf("%c es alfanumérico.\n", caracter);
    } else {
        printf("%c no es alfanumérico.\n", caracter);
    }

    return 0;
}
