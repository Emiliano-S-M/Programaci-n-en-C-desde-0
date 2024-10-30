# Lectura de Datos #2

En el ejercicio anterior de lectura de datos, cada vez que leíamos un dato, inmediatamente lo mostrábamos en pantalla. En esta ocasión, vamos a leer 4 datos distintos al mismo tiempo, y posteriormente los mostraremos en pantalla, primero en el mismo orden en que los leímos, luego, en orden inverso, y luego en orden alternado.

[![Lectura-e-inversion-de-datos.jpg](https://i.postimg.cc/fRHzszdh/Lectura-e-inversion-de-datos.jpg)](https://postimg.cc/nXDbYtTd)

Puedes ver el código de este ejercicio [--aquí](lecturaDeDatos.c)

Como puedes notar en el código de este programa, puedes leer varios datos en una misma línea de código, y al imprimir los datos, también puedes hacerlo en la misma línea de código. 

Aunado a eso, presta atención como con una sola lectura de datos, puedes realizar varias impresiones, y que las variables no pierdan su valor. Esos valores se mantienen hasta que se sobrescriben con nuevos valores. Mientras no se les asigne un nuevo valor, las variables mantendrán su valor previo. Esto se debe a que la memoria asignada a esas variables permanece válida durante la ejecución del programa, y los valores almacenados en esas ubicaciones de memoria se mantienen hasta que se cambian explícitamente.

De igual forma, otra parte importante a notar, es que al imprimir los valores de las variables, lo podemos hacer en cualquier orden, mientras escribamos el nombre de la variable de la cual queramos obtener su valor, por ejemplo, para la siguiente parte.

```c
    int A, B, C, D;
    printf("Ingresa cuatro datos de tipo entero: \n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("\nLos datos ingresados son: \n");
    printf("\nEn el mismo orden: %d %d %d %d", A, B, C, D);
```

Nota cómo tenemos cuatro especificaciones de formato tanto en el `scanf`, como en el `printf`. Esto se debe a que los valores a leer y mostrar son 4 correspondientemente. Y al momento de imprimir, lo hacemos escribiendo las variables separadas por comas, exactamente en el mismo orden en que las leímos, pero en las líneas de código: 

```c
    printf("\nEn orden inverso: %d %d %d %d", D, C, B, A);
    printf("\nAlternados: %d %d %d %d", B, D, A, C);
```

El orden de estas variables cambia, pero estas no pierden su valor, si se les reasigna un valor, esto es una característica de cualquier lenguaje de programación llamado **"independencia de orden"** o **"independencia de posición"**. Esto significa que el orden en el que las variables son pasadas a una función de impresión (como printf en el caso de C) no afecta el resultado final. En otras palabras, podemos especificar las variables en cualquier orden dentro de la función de impresión y el resultado será el mismo.