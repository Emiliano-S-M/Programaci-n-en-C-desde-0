#include <stdio.h>

// Definición de la estructura sin typedef
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    // Declaración de una variable de tipo struct Persona
    struct Persona persona1;

    // Asignación de valores a los campos de la estructura
    snprintf(persona1.nombre, 50, "Juan Perez");
    persona1.edad = 30;

    // Imprimir los valores de la estructura
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);

    return 0;
}
