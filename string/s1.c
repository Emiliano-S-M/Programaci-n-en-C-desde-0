#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    char *result = memchr(str, 'w', strlen(str));
    if (result != NULL) {
        printf("memchr: Found 'w' at position: %ld\n", result - str);
    } else {
        printf("memchr: 'w' not found\n");
    }
    return 0;
}
