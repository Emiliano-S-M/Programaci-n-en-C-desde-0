#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "123.4567890123456789012345";
    char *end;
    long double num = strtold(str, &end);
    printf("El número es %Lf\n", num);
    return 0;
}
