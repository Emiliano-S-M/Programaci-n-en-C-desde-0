#include <stdio.h>
#include <string.h>

int main() {

    char saludo1[] = "Hola";
    char saludo2[] = "Mundo";
    char saludo3[50]; 


    strcpy(saludo3, saludo1);
    printf("Saludo3 después de copiar saludo1: %s\n", saludo3);


    strcat(saludo3, " ");
    strcat(saludo3, saludo2); 
    printf("Saludo3 después de concatenar saludo2: %s\n", saludo3);


    if (strcmp(saludo1, saludo2) == 0) {
        printf("Saludo1 y saludo2 son iguales.\n");
    } else {
        printf("Saludo1 y saludo2 son diferentes.\n");
    }


    int longitudSaludo1 = strlen(saludo1);
    int longitudSaludo2 = strlen(saludo2);
    printf("Longitud de saludo1: %d\n", longitudSaludo1);
    printf("Longitud de saludo2: %d\n", longitudSaludo2);


    char *ptr = strchr(saludo3, 'M');
    if (ptr != NULL) {
        printf("El carácter 'M' se encontró en saludo3 en la posición: %ld\n", ptr - saludo3);
    } else {
        printf("El carácter 'M' no se encontró en saludo3.\n");
    }


    char numeroStr[] = "1234";
    int numero = atoi(numeroStr);
    printf("El número convertido de cadena: %d\n", numero);

    return 0;
}
