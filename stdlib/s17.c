#include <stdlib.h>
#include <stdio.h>
int main() {
    const char *str = "Hola";
    int len = mblen(str, MB_CUR_MAX);
    printf("Número de bytes en el primer carácter multibyte: %d\n", len);
    return 0;
}
