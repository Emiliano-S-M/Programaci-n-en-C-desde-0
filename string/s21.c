#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! How are you?";
    char *token = strtok(str, " ");
    while (token != NULL) {
        printf("strtok: %s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
