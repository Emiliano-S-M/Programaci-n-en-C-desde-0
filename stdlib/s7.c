#include <stdlib.h>
#include <stdio.h>
int main() {
    int *arr = (int*) calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
