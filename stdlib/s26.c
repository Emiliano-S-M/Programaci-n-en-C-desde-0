#include <stdlib.h>
#include <stdio.h>
int main() {
    char str[] = "123.456";
    char *end;
    double num = strtod(str, &end);
    printf("El número es %f\n", num);
    return 0;
}
