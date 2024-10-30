#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    strncat(str1, str2, 3);
    printf("strncat: %s\n", str1);
    return 0;
}
