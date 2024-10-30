#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    size_t length = strlen(str);
    printf("strlen: %zu\n", length);
    return 0;
}
