#include <stdio.h>

void convertirMayusculas(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

void convertirMinusculas(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        str++;
    }
}

int esDigito(char c) {
    return (c >= '0' && c <= '9');
}

int esLetra(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int esMayuscula(char c) {
    return (c >= 'A' && c <= 'Z');
}

int esMinuscula(char c) {
    return (c >= 'a' && c <= 'z');
}

int caracterEntero(char c) {
    if (esDigito(c)) {
        return c - '0';
    }
    return -1; // Indica que no es un dígito
}

char enteroCaracter(int n) {
    if (n >= 0 && n <= 9) {
        return n + '0';
    }
    return '?'; // Indica que no es un número válido
}

void eliminarEspacios(char *str) {
    while (*str) {
        if (*str == ' ') {
            *str = '_';
        }
        str++;
    }
}

void printCharInfo(char c) {
    printf("Caracter: %c\n", c);
    printf("Es dígito: %s\n", esDigito(c) ? "Sí" : "No");
    printf("Es letra: %s\n", esLetra(c) ? "Sí" : "No");
    printf("Es mayúscula: %s\n", esMayuscula(c) ? "Sí" : "No");
    printf("Es minúscula: %s\n", esMinuscula(c) ? "Sí" : "No");
}

int main() {
    // Ejemplo de conversión a mayúsculas
    char str1[] = "Hola, Mundo!";
    convertirMayusculas(str1);
    printf("A mayúsculas: %s\n", str1);

    // Ejemplo de conversión a minúsculas
    char str2[] = "HOLA, MUNDO!";
    convertirMinusculas(str2);
    printf("A minúsculas: %s\n", str2);

    // Ejemplo de verificación de dígitos y letras
    char c1 = '5';
    char c2 = 'A';
    char c3 = 'm';
    printCharInfo(c1);
    printCharInfo(c2);
    printCharInfo(c3);

    // Ejemplo de conversión de carácter a entero
    int num = caracterEntero('8');
    if (num != -1) {
        printf("El carácter '8' convertido a entero es: %d\n", num);
    } else {
        printf("No es un dígito\n");
    }

    // Ejemplo de conversión de entero a carácter
    char ch = enteroCaracter(3);
    if (ch != '?') {
        printf("El entero 3 convertido a carácter es: %c\n", ch);
    } else {
        printf("No es un número válido\n");
    }

    // Ejemplo de reemplazo de espacios por guiones bajos
    char str3[] = "Hola mundo, Como estas?";
    eliminarEspacios(str3);
    printf("Reemplazo de espacios: %s\n", str3);

    return 0;
}
