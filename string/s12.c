#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    int errnum = ENOENT;
    printf("strerror: %s\n", strerror(errnum));
    return 0;
}
