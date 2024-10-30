#include <stdlib.h>
#include <stdio.h>
int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    for(int i = 0; i < 5; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
