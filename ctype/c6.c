#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = '5';

    if (isdigit(caracter)) {
        printf("%c es un dígito.\n", caracter);
    } else {
        printf("%c no es un dígito.\n", caracter);
    }

    return 0;
}
