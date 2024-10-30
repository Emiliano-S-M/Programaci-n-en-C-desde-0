#include <stdio.h>
#include <string.h>

/* Escuela.
El programa genera información estadística de los alumnos de una escuela. */

// Declaración de la estructura alumno utilizando un typedef
typedef struct {
    int matricula;
    char nombre[30];
    float cal[5];  // Campo de la estructura alumno es un arreglo unidimensional
} alumno;

// Prototipos de funciones
void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

int main(void) {
    alumno ARRE[50];  // Se declara un arreglo unidimensional de tipo alumno
    int TAM;

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);  // Se verifica que el tamaño del arreglo sea correcto

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);

    return 0;
}

// La función Lectura se utiliza para leer un arreglo unidimensional de tipo estructura alumno de T elementos
void Lectura(alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++) {
            printf("\tIngrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

// La función F1 obtiene la matrícula y el promedio de cada alumno
void F1(alumno A[], int T) {
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++) {
        printf("\nMatrícula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

// La función F2 obtiene las matrículas de los alumnos cuya calificación en la tercera materia es mayor a 9
void F2(alumno A[], int T) {
    int I;
    printf("\nAlumnos con calificación en la tercera materia > 9");
    for (I = 0; I < T; I++)
        if (A[I].cal[2] > 9)
            printf("\nMatrícula del alumno: %d", A[I].matricula);
}

// Esta función obtiene el promedio general del grupo de la materia 4
void F3(alumno A[], int T) {
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}