#include <stdlib.h>
#include <stdio.h>
int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    free(arr); // Libera la memoria asignada
    return 0;
}
