#include <stdio.h>
#include <string.h>

int main() {
    const char haystack[] = "Hello, world!";
    const char needle[] = "world";
    char *result = strstr(haystack, needle);
    if (result != NULL) {
        printf("strstr: Found 'world' at position: %ld\n", result - haystack);
    } else {
        printf("strstr: 'world' not found\n");
    }
    return 0;
}
