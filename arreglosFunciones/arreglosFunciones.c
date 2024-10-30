#include <stdio.h>

void doblarElementos(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) *= 2;
    }
}

void imprimirArreglo(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Elemento en ptr[%d] = %d\n", i, *(ptr + i));
    }
}

void main(void) {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Arreglo original:\n");
    imprimirArreglo(arr, 5);

    doblarElementos(arr, 5);

    printf("\nArreglo después de doblar los elementos:\n");
    imprimirArreglo(arr, 5);

    getchar();
    getchar();
}
