# Estructura Algorítmica Repetitiva `do while`

La estructura algorítmica repetitiva `do`-`while` **es similar a la estructura `while`**, pero garantiza que el bloque de código se ejecute al menos una vez, incluso si la condición especificada es falsa desde el principio. Después de ejecutar el bloque de código, se verifica la condición y, si es verdadera, el bloque se ejecuta nuevamente.

La sintaxis básica del bucle `do`-`while` es la siguiente:

```c
do {
    // Bloque de código a ejecutar al menos una vez
} while (condición);
```

- **condición:** Es una expresión booleana que se evalúa después de cada iteración del bucle. Si es verdadera, el bloque de código se ejecuta nuevamente; de lo contrario, el bucle termina.

Veamos un ejemplo:

Escribe un diagrama de flujo y el correspondiente programa en C que, al recibir como datos los salarios de los profesores de una universidad, obtenga tanto la nómina como el promedio de los salarios.

[![15-05-2024-0003.jpg](https://i.postimg.cc/DzQkjrkB/15-05-2024-0003.jpg)](https://postimg.cc/VSNV5bNC)


[Código --> aquí](do-while.c)