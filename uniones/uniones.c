#include <stdio.h>
#include <string.h>

struct DatosPersonales {  // Definición de la estructura para datos personales
    char celular[15];  // Campo para almacenar número de celular
    char correo[25];   // Campo para almacenar correo electrónico
};

typedef struct {  // Definición de la estructura Alumno como tipo de dato
    int matricula;  // Campo para almacenar la matrícula del alumno
    char nombre[20];  // Campo para almacenar el nombre del alumno
    char carrera[20];  // Campo para almacenar la carrera del alumno
    float promedio;  // Campo para almacenar el promedio del alumno
    struct DatosPersonales personales;  // Campo para almacenar datos personales del alumno
} Alumno;

void Lectura(Alumno *a);  // Declaración de la función Lectura para ingresar datos del alumno
void ImprimirDatos(Alumno a);  // Declaración de la función ImprimirDatos para mostrar los datos del alumno

int main() {  // Función principal del programa
    Alumno a1 = {120, "Maria", "Contabilidad", 8.9, {"5-158-40-50", "maria@example.com"}};  // Inicialización de a1 con valores conocidos

    Alumno a2, a3;  // Declaración de variables a2 y a3 para almacenar datos de otros alumnos

    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &a2.matricula);  // Lectura de matrícula de a2
    while(getchar() != '\n');  // Limpiar el buffer de entrada
    printf("Ingrese el nombre: ");
    fgets(a2.nombre, 20, stdin);  // Lectura de nombre de a2
    a2.nombre[strcspn(a2.nombre, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese la carrera: ");
    fgets(a2.carrera, 20, stdin);  // Lectura de carrera de a2
    a2.carrera[strcspn(a2.carrera, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);  // Lectura de promedio de a2
    while(getchar() != '\n');  // Limpiar el buffer de entrada
    printf("Ingrese el telefono celular: ");
    fgets(a2.personales.celular, 15, stdin);  // Lectura de celular de a2
    a2.personales.celular[strcspn(a2.personales.celular, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese el correo electronico: ");
    fgets(a2.personales.correo, 25, stdin);  // Lectura de correo de a2
    a2.personales.correo[strcspn(a2.personales.correo, "\n")] = '\0';  // Eliminación del salto de línea

    printf("Alumno 3\n");
    Lectura(&a3);  // Llamada a la función Lectura para ingresar datos de a3

    printf("\nDatos del alumno 1\n");
    ImprimirDatos(a1);  // Llamada a la función ImprimirDatos para mostrar datos de a1

    printf("\nDatos del alumno 2\n");
    ImprimirDatos(a2);  // Llamada a la función ImprimirDatos para mostrar datos de a2

    printf("\nDatos del alumno 3\n");
    ImprimirDatos(a3);  // Llamada a la función ImprimirDatos para mostrar datos de a3

    return 0;  // Retorno exitoso del programa
}

void Lectura(Alumno *a) {  // Definición de la función Lectura para ingresar datos del alumno
    printf("\nIngrese la matricula: ");
    scanf("%d", &a->matricula);  // Lectura de matrícula
    while(getchar() != '\n');  // Limpiar el buffer de entrada
    printf("Ingrese el nombre: ");
    fgets(a->nombre, 20, stdin);  // Lectura de nombre
    a->nombre[strcspn(a->nombre, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese la carrera: ");
    fgets(a->carrera, 20, stdin);  // Lectura de carrera
    a->carrera[strcspn(a->carrera, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);  // Lectura de promedio
    while(getchar() != '\n');  // Limpiar el buffer de entrada
    printf("Ingrese el telefono celular: ");
    fgets(a->personales.celular, 15, stdin);  // Lectura de celular
    a->personales.celular[strcspn(a->personales.celular, "\n")] = '\0';  // Eliminación del salto de línea
    printf("Ingrese el correo electronico: ");
    fgets(a->personales.correo, 25, stdin);  // Lectura de correo
    a->personales.correo[strcspn(a->personales.correo, "\n")] = '\0';  // Eliminación del salto de línea
}

void ImprimirDatos(Alumno a) {  // Definición de la función ImprimirDatos para mostrar los datos del alumno
    printf("Matricula: %d\n", a.matricula);  // Impresión de matrícula
    printf("Nombre: %s\n", a.nombre);  // Impresión de nombre
    printf("Carrera: %s\n", a.carrera);  // Impresión de carrera
    printf("Promedio: %.2f\n", a.promedio);  // Impresión de promedio
    printf("Celular: %s\n", a.personales.celular);  // Impresión de celular
    printf("Correo: %s\n", a.personales.correo);  // Impresión de correo
}
