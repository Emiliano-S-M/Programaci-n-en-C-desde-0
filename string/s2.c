#include <stdio.h>
#include <string.h>

int main() {
    char mem1[] = {1, 2, 3, 4, 5};
    char mem2[] = {1, 2, 3, 4, 6};
    int result = memcmp(mem1, mem2, 5);
    printf("memcmp: %d\n", result);
    return 0;
}
