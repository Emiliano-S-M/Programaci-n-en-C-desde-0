#include <stdlib.h>
#include <stdio.h>
int main() {
    lldiv_t result = lldiv(10LL, 3LL);
    printf("Cociente: %lld, Residuo: %lld\n", result.quot, result.rem);
    return 0;
}
