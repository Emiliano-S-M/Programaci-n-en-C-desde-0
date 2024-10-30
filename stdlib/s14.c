#include <stdlib.h>
#include <stdio.h>
int main() {
    ldiv_t result = ldiv(10L, 3L);
    printf("Cociente: %ld, Residuo: %ld\n", result.quot, result.rem);
    return 0;
}
