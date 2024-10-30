#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, world!";
    memset(str + 7, '*', 5);
    printf("memset: %s\n", str);
    return 0;
}
