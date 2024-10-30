#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! How are you?";
    char *saveptr;
    char *token = strtok_r(str, " ", &saveptr);
    while (token != NULL) {
        printf("strtok_r: %s\n", token);
        token = strtok_r(NULL, " ", &saveptr);
    }
    return 0;
}
