#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 10.5;
    double x2 = 3.0;
    printf("El residuo de %.2f dividido por %.2f es %.2f\n", x1, x2, fmod(x1, x2));
    return 0;
}
