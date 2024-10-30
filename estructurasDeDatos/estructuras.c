#include <stdio.h>
#include <string.h>



// Declaración de la estructura
struct alumno {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[30];
}; 

int main(void) {
    // Declaración de variables de tipo estructura
    struct alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
    struct alumno a2, a3;

    // Variables auxiliares para la entrada de datos
    char nom[20], car[20], dir[30];
    int mat;
    float pro;

    // Los campos de a2 reciben valores por medio de una lectura
    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);

    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese la dirección del alumno 2: ");
    gets(a2.direccion);

    // Los campos de a3 reciben valores por medio de asignaciones
    printf("\nIngrese la matrícula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);

    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);

    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);

    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);

    printf("Ingrese la dirección del alumno 3: ");
    gets(dir);
    strcpy(a3.direccion, dir);

    // Imprimir la información del alumno 1
    printf("\nDatos del alumno 1\n");
    printf("Matrícula: %d\n", a1.matricula);
    printf("Nombre: %s\n", a1.nombre);
    printf("Carrera: %s\n", a1.carrera);
    printf("Promedio: %.2f\n", a1.promedio);
    printf("Dirección: %s\n", a1.direccion);

    // Imprimir la información del alumno 2
    printf("\nDatos del alumno 2\n");
    printf("Matrícula: %d\n", a2.matricula);
    printf("Nombre: %s\n", a2.nombre);
    printf("Carrera: %s\n", a2.carrera);
    printf("Promedio: %.2f\n", a2.promedio);
    printf("Dirección: %s\n", a2.direccion);

    // Imprimir la información del alumno 3
    printf("\nDatos del alumno 3\n");
    printf("Matrícula: %d\t Nombre: %s\t Carrera: %s\t Promedio: %.2f\t Dirección: %s\n", 
           a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);

    return 0;
}
