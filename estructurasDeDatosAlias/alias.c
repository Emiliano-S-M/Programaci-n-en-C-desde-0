#include <stdio.h>

// Definición de la estructura con typedef
typedef struct {
    char nombre[50];
    int edad;
} Persona;

int main() {
    // Declaración de una variable de tipo Persona
    Persona persona1;

    // Asignación de valores a los campos de la estructura
    snprintf(persona1.nombre, 50, "Juan Perez");
    persona1.edad = 30;

    // Imprimir los valores de la estructura
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);

    return 0;
}
