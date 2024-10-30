#include <stdio.h>

void main(void){
    printf("Hola Mundo!");

    getchar();
     /*
     Utilizamos getchar por que en entornos como Windows, 
    la consola suele cerrarse automáticamente al finalizar un programa. 
    Ppuedes agregar esta instrucción al final de tu programa 
    en C para que la consola permanezca abierta después de la ejecución.
    Esta funcion esperara a que el usuario ingrese un caracter antes de
    que el programa termine y la consola se cierre.
    
    Este enfoque es útil principalmente para propósitos de depuración o
    cuando deseas mantener la consola abierta para ver los resultados de
    tu programa antes de que se cierre. Ten en cuenta que en un entorno
    de producción, como al distribuir tu programa a otros usuarios, no es
    común dejar la consola abierta de esta manera, ya que puede resultar
    molesto para los usuarios.
    */
}

