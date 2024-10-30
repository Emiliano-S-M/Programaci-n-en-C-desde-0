#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "123456";
    char *end;
    long num = strtol(str, &end, 10);
    printf("El número es %ld\n", num);
    return 0;
}
