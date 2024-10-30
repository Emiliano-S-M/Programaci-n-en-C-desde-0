#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("memcpy: %s\n", dest);
    return 0;
}
