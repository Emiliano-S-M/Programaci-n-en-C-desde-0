#include <stdlib.h>
#include <stdio.h>
int main() {
    const char *str = "H";
    wchar_t wc;
    int len = mbtowc(&wc, str, MB_CUR_MAX);
    printf("Wide character: %lc, Longitud: %d\n", wc, len);
    return 0;
}
