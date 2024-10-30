#include <stdlib.h>
#include <stdio.h>
int main() {
    const char *str = "Hola";
    wchar_t wstr[5];
    mbstowcs(wstr, str, 5);
    printf("Cadena wide character: %ls\n", wstr);
    return 0;
}
