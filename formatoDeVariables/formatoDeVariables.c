#include <stdio.h>

void main(void) {
    int entero_positivo = 42;
    int entero_negativo = -42;
    unsigned int entero_sin_signo = 123;
    long int entero_largo_positivo = 1234567890;
    unsigned long int entero_largo_sin_signo = 1234567890;
    float flotante_simple = 3.14159;
    double flotante_doble = 12345.6789;
    char caracter = 'A';
    char cadena[] = "Hola mundo";
    
    printf("Entero positivo (%%u): %u\n", entero_positivo);
    printf("Entero negativo (%%d): %d\n", entero_negativo);
    printf("Entero negativo (%%i): %i\n", entero_negativo);
    printf("Entero sin signo (%%u): %u\n", entero_sin_signo);
    printf("Entero largo positivo (%%ld): %ld\n", entero_largo_positivo);
    printf("Entero largo sin signo (%%lu): %lu\n", entero_largo_sin_signo);
    printf("Flotante simple (%%f): %f\n", flotante_simple);
    printf("Flotante simple (%%e): %e\n", flotante_simple);
    printf("Flotante doble (%%lf): %lf\n", flotante_doble);
    printf("Flotante doble (%%le): %le\n", flotante_doble);
    printf("Caracter (%%c): %c\n", caracter);
    printf("Cadena (%%s): %s\n", cadena);
    printf("Flotante simple (%%g): %g\n", flotante_simple);

    getchar();
}
