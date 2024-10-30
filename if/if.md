# `if` en C

Una estructura algorítmica simple es el `if`, que permite realizar una evaluación condicional y ejecutar cierto bloque de código si la condición especificada se cumple. La sintaxis básica de un `if` en C es la siguiente:

```c

if (condición) {
    // Código a ejecutar si la condición es verdadera
}

```

donde: 
  - **Condición:** Es una expresión booleana que se evalúa como verdadera (`true`) o falsa (`false`). Puede ser una expresión simple o una combinación de expresiones utilizando operadores lógicos (`&&`, `||`, `!`, etc.).
  - **Bloque de código:** Es un conjunto de declaraciones o instrucciones que se ejecutan si la condición es verdadera. Estas declaraciones deben estar encerradas entre llaves `{}` para formar un bloque de código. Si la condición es verdadera, el bloque de código asociado se ejecutará; de lo contrario, se omitirá.

El siguiente diagrama de flujo representa como es que funciona un if.

[![ifSimple.jpg](https://i.postimg.cc/d1hPztDS/ifSimple.jpg)](https://postimg.cc/MMJFBw7y)

Como se mencionó, si la condición se cumple, se ejecutará el bloque de código que contenga dentro. En caso de no cumplirse, el programa se saltará ese bloque de código, y pasará a lo que sigue, en este caso, salir del programa.

  Puedes seleccionar algo de la lista para ver algunos ejemplos: 

- [Ejemplo 1](ejem1.c)
- [Ejemplo 2](ejem2.c)
- [Ejemplo 4](ejem3.c)
- [Ejemplo 5](ejem4.c)
- [Ejemplo 6](ejem5.c)