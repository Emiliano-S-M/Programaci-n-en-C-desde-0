#include <stdlib.h>
#include <stdio.h>
int main() {
    unsigned int seed = 123;
    printf("Número aleatorio (reentrante): %d\n", rand_r(&seed));
    return 0;
}
