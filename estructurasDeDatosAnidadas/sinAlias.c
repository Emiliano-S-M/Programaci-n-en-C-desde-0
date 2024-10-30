#include <stdio.h>

// Definición de una estructura anidada sin typedef
struct Direccion {
    char calle[100];
    int numero;
    char ciudad[50];
};

struct Persona {
    char nombre[50];
    int edad;
    struct Direccion direccion;  // Campo anidado de tipo struct Direccion
};

int main() {
    // Declaración de una variable de tipo struct Persona
    struct Persona persona1;

    // Asignación de valores a los campos de la estructura
    snprintf(persona1.nombre, 50, "Juan Perez");
    persona1.edad = 30;
    snprintf(persona1.direccion.calle, 100, "Av. Principal");
    persona1.direccion.numero = 123;
    snprintf(persona1.direccion.ciudad, 50, "Ciudad de Ejemplo");

    // Imprimir los valores de la estructura
    printf("Sin typedef:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Direccion: %s, %d, %s\n", persona1.direccion.calle, persona1.direccion.numero, persona1.direccion.ciudad);

    return 0;
}
