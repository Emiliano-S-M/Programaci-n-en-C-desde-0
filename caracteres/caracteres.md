# Caracteres

Tipo de Dato `char`

En C, el tipo de dato char se utiliza para almacenar un solo carácter. Los caracteres se representan en C utilizando el conjunto de caracteres ASCII (American Standard Code for Information Interchange) u otros conjuntos de caracteres como Unicode en implementaciones más modernas.

**Declaración e Inicialización**
Para declarar una variable de tipo char, simplemente se utiliza la palabra clave `char`. Un carácter puede ser inicializado utilizando comillas simples.

```c
char letra = 'A';
char digito = '5';
char simbolo = '$';
```
**Propiedades del Tipo `char`**

- **Tamaño:** En la mayoría de las implementaciones de C, un `char` ocupa un byte (8 bits) de memoria. Esto permite representar 256 valores distintos (de -128 a 127 si es con signo, o de 0 a 255 si es sin signo).

- **Signo:** En C, los caracteres pueden ser tratados como `signed` o `unsigned`. Por defecto, el tipo char puede ser `signed` o `unsigned` dependiendo del compilador y la arquitectura, aunque `signed char` y `unsigned char` pueden ser utilizados explícitamente.

```c
signed char c1 = -10;
unsigned char c2 = 250;
```

## **Operaciones con Caracteres**

Aunque los caracteres representan símbolos, en C también se pueden realizar operaciones aritméticas con ellos debido a su representación numérica subyacente en ASCII.

**Ejemplos de Operaciones:**

- Asignación: Asignar un nuevo valor a una variable `char`.
  ```c
  char c = 'A';
  ```

- Comparación: Comparar dos caracteres.
  ```c
  if (c == 'A') {
    // Código
    }
  ```
- Operaciones Aritméticas: Sumar o restar valores enteros a caracteres.
  ```c
  char letra = 'A';
  letra = letra + 1; // letra ahora es 'B'
  ```

Estas son solo algunas de las funciones, pero podemos hacer muchas más cosas, por ejemplo, analicemos el siguiente diagrama de flujo:


[![21-05-2024-0001.jpg](https://i.postimg.cc/Hk2FZfJx/21-05-2024-0001.jpg)](https://postimg.cc/bZZ6dV9c)
[![21-05-2024-0002.jpg](https://i.postimg.cc/9Md7jtyL/21-05-2024-0002.jpg)](https://postimg.cc/S2Ks69T9)

Estas dos imágenes representan un mismo programa, dividido en varias funciones, las cuales ejecutan una tarea específica cada una.

El diagrama que representa al programa principal, es el diagrama que pareciera echo a mano, este es el diagrama que representa el main.

[Codigo --> aquí](caracteres.c)