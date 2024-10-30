#include <stdlib.h>
#include <stdio.h>
int main() {
    wchar_t wstr[] = L"Hola";
    char str[5];
    wcstombs(str, wstr, 5);
    printf("Cadena multibyte: %s\n", str);
    return 0;
}
