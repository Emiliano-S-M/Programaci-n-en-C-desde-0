#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int values[] = { 1, 2, 3, 4, 5 };
    int key = 3;
    int *item = (int*) bsearch(&key, values, 5, sizeof(int), compare);
    if (item != NULL) {
        printf("Elemento encontrado: %d\n", *item);
    } else {
        printf("Elemento no encontrado\n");
    }
    return 0;
}
