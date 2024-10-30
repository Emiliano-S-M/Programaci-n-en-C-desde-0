#include <stdlib.h>
#include <stdio.h>
int main() {
    int *arr = (int*) malloc(2 * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    arr[0] = 1;
    arr[1] = 2;

    arr = (int*) realloc(arr, 4 * sizeof(int));
    if (arr == NULL) {
        printf("Error al reasignar memoria\n");
        return 1;
    }
    arr[2] = 3;
    arr[3] = 4;

    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
