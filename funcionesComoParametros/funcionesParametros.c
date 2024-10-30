#include <stdio.h>

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b){
    return a * b;
}

float division(float a, float b){
    return a / b;
}

void operacion(float a, float b, float (*func)(float, float)) {
    float resultado = func(a, b);
    printf("El resultado de la operación es: %.2f\n", resultado);
}


int main(){
    float x = 10, y = 5;

    operacion(x, y, suma);

    operacion(x, y, resta);

    return 0;
}
