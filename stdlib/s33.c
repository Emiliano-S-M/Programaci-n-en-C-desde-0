#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "123456789012345";
    char *end;
    long long num = strtoll(str, &end, 10);
    printf("El número es %lld\n", num);
    return 0;
}
