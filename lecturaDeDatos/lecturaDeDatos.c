#include <stdio.h>

void main(void){
    char nombre[20];
    int edad;
    float estatura;

    printf("Ingresa tu nombre: ");
    scanf("%s", &nombre);
    printf("\nHola %s", nombre);
    printf("\nIngresa tu edad: ");
    scanf("%d", &edad);
    printf("\nTu edad es: %d", edad);
    printf("\nIngresa tu estatura: ");
    scanf("%f", &estatura);
    printf("\nTu estatura es: %f", estatura);
    getchar();
    getchar();
}

/*
    En este codigo notaras que usamos dos veces getchar(), esto se debe
    a que si no lo hacemos, automaticamente el programa se cerrara,
    como recordaras, anteriormente mencionamos que usando getchar() el 
    programa permaneceria abierto hasta que el usuario tecleara algo mas.

    En este caso, si solo dejamos un getchar el programa se cerrara, debido a
    que el usuario ya ha digitado algo con anterioridad, ya que cuando usamos
    scanf para leer datos, scanf deja un carácter de nueva línea en el búfer 
    de entrada. Este carácter de nueva línea es consumido por getchar() de 
    inmediato, lo que hace que el programa se cierre instantáneamente termine.
*/