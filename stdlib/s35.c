#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "123456789012345";
    char *end;
    unsigned long long num = strtoull(str, &end, 10);
    printf("El número es %llu\n", num);
    return 0;
}
