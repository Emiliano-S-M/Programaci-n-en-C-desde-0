#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int values[] = { 40, 10, 100, 90, 20, 25 };
    int n = sizeof(values)/sizeof(values[0]);

    qsort(values, n, sizeof(int), compare);

    for(int i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;
}
