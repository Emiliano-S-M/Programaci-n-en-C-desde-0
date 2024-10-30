#include <stdio.h>

// Definición de una estructura anidada con typedef
typedef struct {
    char calle[100];
    int numero;
    char ciudad[50];
} Direccion;

typedef struct {
    char nombre[50];
    int edad;
    Direccion direccion;  // Campo anidado de tipo Direccion
} Persona;

int main() {
    // Declaración de una variable de tipo Persona
    Persona persona2;

    // Asignación de valores a los campos de la estructura
    snprintf(persona2.nombre, 50, "Maria Gomez");
    persona2.edad = 25;
    snprintf(persona2.direccion.calle, 100, "Calle Secundaria");
    persona2.direccion.numero = 456;
    snprintf(persona2.direccion.ciudad, 50, "Otro Ejemplo");

    // Imprimir los valores de la estructura
    printf("\nCon typedef:\n");
    printf("Nombre: %s\n", persona2.nombre);
    printf("Edad: %d\n", persona2.edad);
    printf("Direccion: %s, %d, %s\n", persona2.direccion.calle, persona2.direccion.numero, persona2.direccion.ciudad);

    return 0;
}
