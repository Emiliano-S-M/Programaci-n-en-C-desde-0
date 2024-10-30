#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    char *result = strrchr(str, 'o');
    if (result != NULL) {
        printf("strrchr: Found 'o' at position: %ld\n", result - str);
    } else {
        printf("strrchr: 'o' not found\n");
    }
    return 0;
}
