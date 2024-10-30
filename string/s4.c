#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    memmove(str + 7, str, 5);
    printf("memmove: %s\n", str);
    return 0;
}
