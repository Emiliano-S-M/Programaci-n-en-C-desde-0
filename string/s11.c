#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "o,";
    size_t result = strcspn(str1, str2);
    printf("strcspn: %zu\n", result);
    return 0;
}
