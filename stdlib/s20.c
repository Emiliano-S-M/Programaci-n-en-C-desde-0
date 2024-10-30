#include <stdlib.h>
#include <stdio.h>
int main() {
    putenv("NUEVA_VAR=HolaMundo");
    printf("NUEVA_VAR: %s\n", getenv("NUEVA_VAR"));
    return 0;
}
