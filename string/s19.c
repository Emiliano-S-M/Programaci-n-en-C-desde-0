#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "He";
    size_t result = strspn(str1, str2);
    printf("strspn: %zu\n", result);
    return 0;
}
