#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Para isalpha y toupper

void escribirArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "w");  // Modo "w": Escritura (sobrescribe el archivo si existe)

    if (archivo == NULL) {
        perror("Error al abrir el archivo para escritura");
        return;
    }

    fprintf(archivo, "Operación: Escribir datos en el archivo.\n");
    fprintf(archivo, "Hola, este es un archivo de prueba.\n");
    fprintf(archivo, "Segunda línea del archivo.\n");

    fclose(archivo);
}

void leerArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "r");  // Modo "r": Lectura

    if (archivo == NULL) {
        perror("Error al abrir el archivo para lectura");
        return;
    }

    printf("\nOperación: Leer y mostrar contenido del archivo:\n");

    char linea[100];
    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);
}

void anadirArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "a");  // Modo "a": Añadir al final del archivo

    if (archivo == NULL) {
        perror("Error al abrir el archivo para añadir datos");
        return;
    }

    fprintf(archivo, "\nOperación: Añadir datos al final del archivo.\n");
    fprintf(archivo, "Nueva línea añadida al final del archivo.\n");

    fclose(archivo);
}

void modificarArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "r+");  // Modo "r+": Lectura y escritura (el archivo debe existir)

    if (archivo == NULL) {
        perror("Error al abrir el archivo para modificar");
        return;
    }

    printf("\nOperación: Modificar el primer carácter del archivo.\n");

    // Leer el primer carácter y convertirlo a mayúscula si es una letra
    int primerCaracter = fgetc(archivo);
    if (primerCaracter != EOF) {
        if (isalpha(primerCaracter)) {
            fseek(archivo, 0, SEEK_SET);  // Mover el puntero al inicio del archivo
            fputc(toupper(primerCaracter), archivo);  // Escribir el carácter en mayúscula
        }
    }

    fclose(archivo);
}

void leerYModificarArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "r+");  // Modo "r+": Lectura y escritura (sobrescribe el archivo)

    if (archivo == NULL) {
        perror("Error al abrir el archivo para leer y escribir");
        return;
    }

    printf("\nOperación: Escribir datos en el archivo antes de leer y modificar.\n");
    fprintf(archivo, "Operación: Escribir datos en el archivo antes de leer y modificar.\n");
    fprintf(archivo, "Este es un archivo de prueba.\n");

    // Mover el puntero al inicio del archivo
    fseek(archivo, 0, SEEK_SET);

    printf("\nOperación: Leer y mostrar contenido del archivo después de escribir:\n");

    char linea[100];
    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);
}

void anadirYLeerArchivo(const char *nombreArchivo) {
    FILE *archivo;
    archivo = fopen(nombreArchivo, "a+");  // Modo "a+": Añadir al final y leer

    if (archivo == NULL) {
        perror("Error al abrir el archivo para añadir y leer");
        return;
    }

    fprintf(archivo, "\nOperación: Añadir datos al final del archivo antes de leer.\n");
    fprintf(archivo, "Línea añadida al final y leída.\n");

    // Mover el puntero al inicio del archivo
    fseek(archivo, 0, SEEK_SET);

    printf("\nOperación: Leer y mostrar contenido del archivo después de añadir:\n");

    char linea[100];
    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);
}

int main() {
    const char *nombreArchivo = "datos.txt";

    // 1. Escribir datos en el archivo usando modo "w"
    escribirArchivo(nombreArchivo);

    // 2. Añadir datos al final del archivo usando modo "a"
    anadirArchivo(nombreArchivo);

    // 3. Modificar el primer carácter del archivo usando modo "r+"
    modificarArchivo(nombreArchivo);

    // 4. Leer y mostrar contenido del archivo usando modo "r"
    leerArchivo(nombreArchivo);

    // 5. Escribir datos en el archivo antes de leer y modificar usando modo "r+"
    leerYModificarArchivo(nombreArchivo);

    // 6. Añadir datos y leer después de añadir usando modo "a+"
    anadirYLeerArchivo(nombreArchivo);

    return 0;
}
