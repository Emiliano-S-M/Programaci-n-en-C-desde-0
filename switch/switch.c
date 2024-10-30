#include <stdio.h>

void main(void){

    int OP;

    printf("\n\tSeleccione una opcion\n\t");
    scanf("%i", &OP);

    switch (OP)
    {
    case 1:
       printf("\tSeleccionaste la Opcion 1\n");
        break;
    case 2:
       printf("\tSeleccionaste la Opcion 2\n");
        break;
    case 3:
       printf("\tSeleccionaste la Opcion 3\n");
        break;
    case 4:
       printf("\tSeleccionaste la Opcion 4\n");
        break;
    
    default:
       printf("\tOpcion invalida\n");
        break;
    }

    getchar();
    getchar();
}