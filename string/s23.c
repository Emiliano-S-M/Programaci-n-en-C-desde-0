#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_COLLATE, "en_US.UTF-8");
    char src[] = "Hello";
    char dest[20];
    size_t len = strxfrm(dest, src, sizeof(dest));
    printf("strxfrm: %s (length: %zu)\n", dest, len);
    return 0;
}
