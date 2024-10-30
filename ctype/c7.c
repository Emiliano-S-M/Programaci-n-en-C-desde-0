#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter = 'A';

    if (isgraph(caracter)) {
        printf("%c tiene una representación gráfica visible.\n", caracter);
    } else {
        printf("%c no tiene una representación gráfica visible.\n", caracter);
    }

    return 0;
}
