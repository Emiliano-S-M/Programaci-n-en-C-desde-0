#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Heaven";
    int result = strncmp(str1, str2, 2);
    printf("strncmp: %d\n", result);
    return 0;
}
