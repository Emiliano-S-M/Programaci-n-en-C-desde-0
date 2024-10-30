#include <stdlib.h>
#include <stdio.h>
int main() {
    char *path = getenv("PATH");
    if (path != NULL) {
        printf("PATH: %s\n", path);
    } else {
        printf("Variable PATH no encontrada\n");
    }
    return 0;
}
