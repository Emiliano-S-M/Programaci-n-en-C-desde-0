#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "1234567890";
    long num = atol(str);
    printf("El número es %ld\n", num);
    return 0;
}
