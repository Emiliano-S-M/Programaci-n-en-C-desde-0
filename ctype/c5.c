#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = '\n';

    if (iscntrl(caracter)) {
        printf("%c es un carácter de control.\n", caracter);
    } else {
        printf("%c no es un carácter de control.\n", caracter);
    }

    return 0;
}
