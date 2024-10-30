#include <stdlib.h>
#include <stdio.h>
int main() {
    wchar_t wc = L'H';
    char str[MB_CUR_MAX];
    int len = wctomb(str, wc);
    printf("Cadena multibyte: %s, Longitud: %d\n", str, len);
    return 0;
}
