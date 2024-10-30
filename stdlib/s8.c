#include <stdlib.h>
#include <stdio.h>
int main() {
    div_t result = div(10, 3);
    printf("Cociente: %d, Residuo: %d\n", result.quot, result.rem);
    return 0;
}
