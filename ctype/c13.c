#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'F';

    if (isxdigit(caracter)) {
        printf("%c es un dígito hexadecimal.\n", caracter);
    } else {
        printf("%c no es un dígito hexadecimal.\n", caracter);
    }

    return 0;
}
