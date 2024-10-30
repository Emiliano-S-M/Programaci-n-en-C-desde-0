#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "aeiou";
    char *result = strpbrk(str1, str2);
    if (result != NULL) {
        printf("strpbrk: Found vowel '%c' at position: %ld\n", *result, result - str1);
    } else {
        printf("strpbrk: No vowels found\n");
    }
    return 0;
}
