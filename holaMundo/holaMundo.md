# ¡Hola mundo!

Y como no podía ser de otra forma, [nuestro primer programa](holaMundo.c) es un "hola mundo".

Para este programa utilizamos la librería estándar `<stdio.h>` (Standard Input Output Header) de entrada/salida.

Esta librería incluye las instrucciones básicas de cualquier programa que vallamos a realizar, que las instrucciones `printf` y `scanf`, que son necesarias para *escribir* y *leer* respectivamente.

Por otra parte, los programas comienzan a ejecutarse a partir de un determinado punto, para este caso, ese punto es la instrucción `void main(void)`, la cual es la **función principal**, pero más adelante veremos que son las funciones. Aun así, de momento quédate con ese concepto.

El primer `void` representa que nuestra función no devolverá datos de ningún tipo.
El segundo `void` indica que el programa no tiene parámetros (veremos que son los parámetros más adelante).

> **Nota:** Todas las instrucciones deben de estar dentro de un bloque **{ }** y finalizar con el dolor de cabeza de todos los programadadores (excepto python y algunos de JS) que es el **;** (punto y coma). Este operador no se utiliza unicamente en los casos en que las instrucciones correspondan a estructuras selectivas como `if`, `if-else`, `switch`, estructuras repetitivas como `for`, `while`, `do-while`, o a nombre de funciones.

Para este programa en particular, el diagrama de flujo es el siguiente.

[![hola-Mundo.jpg](https://i.postimg.cc/0jN4fKGH/hola-Mundo.jpg)](https://postimg.cc/Hcf3WxhQ)

Únicamente indicamos que inicia el programa, que imprimirá un mensaje en pantalla (Hola, Mundo!) y luego finalizará. [Revisa el programa aquí](holaMundo.c).

Las líneas de código que empiezan por `/*` y finalizan con `*/` son comentarios multilínea, que son para tener notas o explicar que es lo que hace determinada parte del código, estas líneas no son leídas por nuestro compilador, debido a que como ya se digo, son únicamente comentarios.

Además de los comentarios multilínea, tenemos los comentarios de una sola línea, que se escriben con `//` al principio del comentario.