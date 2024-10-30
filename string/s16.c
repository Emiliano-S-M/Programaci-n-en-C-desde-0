#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    strncpy(dest, src, 3);
    dest[3] = '\0'; // Ensure null-termination
    printf("strncpy: %s\n", dest);
    return 0;
}
