#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    char *result = strchr(str, 'w');
    if (result != NULL) {
        printf("strchr: Found 'w' at position: %ld\n", result - str);
    } else {
        printf("strchr: 'w' not found\n");
    }
    return 0;
}
