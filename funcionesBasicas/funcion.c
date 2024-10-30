#include <stdio.h>

int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

void main(void) {
    int x = 5;
    int y = 3;
    int z = suma(x, y);
    printf("La suma de %d y %d es: %d\n", x, y, z);

    getchar();
}


/*

En este ejemplo, suma es el nombre de la función, int es el 
tipo de retorno que indica que la función devuelve un valor 
entero, a y b son los parámetros que se pasan a la función, 
y el cuerpo de la función realiza la operación de suma y 
devuelve el resultado. La función se llama desde la función 
main() con dos argumentos, y el valor devuelto se almacena 
en la variable z.

*/