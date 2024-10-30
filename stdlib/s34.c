#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "1234567890";
    char *end;
    unsigned long num = strtoul(str, &end, 10);
    printf("El número es %lu\n", num);
    return 0;
}
