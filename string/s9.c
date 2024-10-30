#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_COLLATE, "en_US.UTF-8");
    char str1[] = "Hello";
    char str2[] = "world";
    int result = strcoll(str1, str2);
    printf("strcoll: %d\n", result);
    return 0;
}
