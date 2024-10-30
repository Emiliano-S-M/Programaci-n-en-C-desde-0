#include <stdio.h>

int main() {
    int temperatura = 25;
    int humedad = 70;

    if ((temperatura > 30 || humedad > 80) && !(temperatura > 35 && humedad > 90)) {
        printf("Condiciones adecuadas para salir afuera.\n");
    }

    return 0;
}


/*

En este ejemplo, el mensaje "Condiciones adecuadas para salir afuera" se imprimirá si se cumplen las siguientes condiciones:

La temperatura es mayor que 30 grados o la humedad es mayor que 80.
Y al mismo tiempo, la temperatura no es mayor que 35 grados y la humedad no es mayor que 90.

*/