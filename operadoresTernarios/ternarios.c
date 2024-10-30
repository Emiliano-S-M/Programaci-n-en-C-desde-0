#include <stdio.h>

int main() {
    int numero;

    // Ejemplo 1: Verificar si un número es positivo o negativo
    printf("Ejemplo 1:\n");
    numero = 10;
    (numero >= 0) ? printf("%d es un número positivo.\n", numero) : printf("%d es un número negativo.\n", numero);

    // Ejemplo 2: Verificar si un número es par o impar
    printf("\nEjemplo 2:\n");
    numero = 7;
    (numero % 2 == 0) ? printf("%d es un número par.\n", numero) : printf("%d es un número impar.\n", numero);

    // Ejemplo 3: Determinar si un estudiante aprobó o reprobó un examen
    printf("\nEjemplo 3:\n");
    int calificacion = 65;
    (calificacion >= 60) ? printf("El estudiante aprobó el examen.\n") : printf("El estudiante reprobó el examen.\n");

    // Ejemplo 4: Calcular el máximo de dos números
    printf("\nEjemplo 4:\n");
    int a = 10, b = 15;
    int maximo = (a > b) ? a : b;
    printf("El máximo entre %d y %d es: %d\n", a, b, maximo);

    // Ejemplo 5: Verificar si un año es bisiesto
    printf("\nEjemplo 5:\n");
    int anio = 2024;
    (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) ? printf("%d es un año bisiesto.\n", anio) : printf("%d no es un año bisiesto.\n", anio);

    // Ejemplo 6: Determinar el signo de un número
    printf("\nEjemplo 6:\n");
    numero = -8;
    char signo = (numero >= 0) ? '+' : '-';
    printf("El signo de %d es %c\n", numero, signo);

    // Ejemplo 7: Verificar si un número es primo
    printf("\nEjemplo 7:\n");
    numero = 11;
    (numero == 2 || numero == 3 || numero == 5 || numero == 7) ? printf("%d es un número primo.\n", numero) : 
        (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0 && numero % 7 != 0) ? printf("%d es un número primo.\n", numero) : 
        printf("%d no es un número primo.\n", numero);

    // Ejemplo 8: Convertir una calificación numérica a letra
    printf("\nEjemplo 8:\n");
    calificacion = 75;
    char letra = (calificacion >= 90) ? 'A' : (calificacion >= 80) ? 'B' : (calificacion >= 70) ? 'C' : (calificacion >= 60) ? 'D' : 'F';
    printf("La calificación %d equivale a la letra %c\n", calificacion, letra);

    return 0;
}
