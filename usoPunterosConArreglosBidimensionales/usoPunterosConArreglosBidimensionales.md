# Uso de Punteros con Arreglos Bidimensionales

Puedes utilizar punteros para trabajar con arreglos bidimensionales, al igual que como lo haríamos con arreglos unidimensionales, aunque la sintaxis puede ser un poco más compleja.

Por ejemplo:

```c
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```
Aquí hemos declarado nuestro arreglo unidimensional.

Ahora para declarar el puntero podemos hacerlo de la siguiente forma:

```c
int (*p)[4] = arr;
```
En este código, p es un puntero a un arreglo de 4 enteros. Esto significa que p sabe que cada "fila" del arreglo bidimensional tiene 4 enteros. Por lo tanto, cuando accedes a `p[i]`, el compilador entiende que debe moverse 4 enteros a la vez.


La declaración del puntero a un arreglo en C es muy específica en cuanto al tamaño del arreglo al que apunta. Cuando declaras un puntero a un arreglo de un tamaño específico, el compilador necesita saber exactamente cuántos elementos hay en cada sub arreglo para realizar correctamente la aritmética de punteros. Lo que no es estrictamente necesario declarar es la cantidad de filas, solo la cantidad de columnas.

Por ejemplo, esta sería una declaración equivocada:

```c
int (*p)[6] = arr;
```
En esta parte, p se declara como un puntero a un arreglo de 6 enteros. Esto es incorrecto si `arr` es en realidad un arreglo de arreglos de 4 enteros. La aritmética de punteros será incorrecta porque el compilador pensará que cada fila tiene 6 enteros cuando en realidad solo tiene 4.

Es crucial que el tamaño del arreglo en la declaración del puntero coincida con el tamaño real de las filas del arreglo bidimensional para que la aritmética de punteros funcione correctamente.

Usar un tamaño incorrecto en la declaración del puntero llevará a accesos de memoria incorrectos y posiblemente a errores en tiempo de ejecución o comportamiento indefinido.

Tomando en cuenta la declaración de nuestro apuntador:

```c
int (*p)[4] = arr;
```

podemos acceder al primer elemento de nuestro arreglo de la siguiente manera:

```c
int firstElement = p[0][0]; // Es equivalente a arr[0][0]
```

O bien acceder al segundo elemento de la segunda fila:

```c
int secondElement = p[1][1]; // Es equivalente a arr[1][1]
```

De igual forma, tal y como en los arreglos unidimensionales, podemos modificar la información del arreglo mediante los punteros:

```c
p[1][2] = 42; // Modifica el elemento en la segunda fila y tercera columna a 42
```

Recuerda que al modificar la información de un arreglo mediante punteros, este mismo modifica la información del arreglo original, es decir, los cambios se hacen directamente en la dirección de memoria del arreglo.

## Acceso y Modificación Usando Punteros a Enteros

También tenemos el método de **Acceso y Modificación Usando Punteros a Enteros.**

Puedes usar un puntero a entero para acceder y modificar el arreglo bidimensional. Primero, declaramos un puntero a entero que apunte al primer elemento del arreglo:

```c
int *p = &arr[0][0];
```

Podemos acceder a un elemento específico usando aritmética de punteros:

```c
int value = *(p + 1 * 4 + 2); // Accede al elemento en la segunda fila y tercera columna (valor 7)
```

De igual forma, podemos modificar el valor de un elemento específico usando aritmética de punteros:

```c
*(p + 1 * 4 + 2) = 42; // Modifica el elemento en la segunda fila y tercera columna a 42
```

Vamos a descomponer la expresión `*(p + 1 * 4 + 2)` para entender su lógica:
- `p`: Es el puntero al primer elemento del arreglo bidimensional.
- `1 * 4`: Esto representa el desplazamiento necesario para llegar a la segunda fila del arreglo. Como cada fila tiene 4 elementos (debido a que es un arreglo bidimensional con 4 columnas), necesitamos avanzar 4 elementos para llegar a la segunda fila. 1 * 4 nos da ese desplazamiento.
- `+ 2`: Este número representa el desplazamiento dentro de la fila. En este caso, estamos avanzando 2 elementos desde el inicio de la fila para llegar al tercer elemento de esa fila, que es el que estamos buscando.

Entonces, en resumen:

`*(p + 1 * 4 + 2)`: Avanza a la segunda fila del arreglo (4 elementos de desplazamiento) y luego avanza 2 elementos más dentro de esa fila para llegar al elemento deseado.

Esta es la lógica detrás de la expresión *(p + 1 * 4 + 2) para acceder al elemento en la segunda fila y tercera columna del arreglo bidimensional. Es una forma de calcular el desplazamiento necesario en la memoria para llegar al elemento deseado utilizando aritmética de punteros.

La expresión *(p + 2 * 4 + 3) sigue la misma lógica que la explicada anteriormente, pero con diferentes valores de desplazamiento.

Desglosemos la expresión:

- `p`: Es el puntero al primer elemento del arreglo bidimensional.
- `2 * 4`: Esto representa el desplazamiento necesario para llegar a la tercera fila del arreglo. Como cada fila tiene 4 elementos, necesitamos avanzar 4 elementos dos veces para llegar a la tercera fila. 2 * 4 nos da ese desplazamiento.
- `+ 3`: Este número representa el desplazamiento dentro de la fila. En este caso, estamos avanzando 3 elementos desde el inicio de la tercera fila para llegar al cuarto elemento de esa fila, que es el que estamos buscando.

Entonces, en resumen:

`*(p + 2 * 4 + 3)`: Avanza a la tercera fila del arreglo (8 elementos de desplazamiento) y luego avanza 3 elementos más dentro de esa fila para llegar al elemento deseado.

Por ejemplo, nuestro arreglo `arr[3][4]` gráficamente se vería así:

[![20-05-2024-0002.jpg](https://i.postimg.cc/wjL1wWCV/20-05-2024-0002.jpg)](https://postimg.cc/nXVVz1cj)

Si queremos acceder a cada uno de sus datos mediante la aritmética de punteros, tendríamos estas fórmulas:

[![20-05-2024-0003.jpg](https://i.postimg.cc/BZ16N79V/20-05-2024-0003.jpg)](https://postimg.cc/grmm2D0V)

Usando la misma lógica, podemos modificar el contenido de una casilla en específico usando su puntero correspondiente. Por ejemplo, si queremos cambiar el valor de 6 por 13, tendríamos la siguiente línea de código:

```c
*(p + 1 * 4 + 1) = 13;
```

Y ahora tendríamos lo siguiente:

[![20-05-2024-0004.jpg](https://i.postimg.cc/G3J0cvkp/20-05-2024-0004.jpg)](https://postimg.cc/Cd1r7Bry)


Tenemos el siguiente diagrama de flujo para poner en práctica todo esto:

[![20-05-2024-0005.jpg](https://i.postimg.cc/wvjwNrxs/20-05-2024-0005.jpg)](https://postimg.cc/SXHLFDMy)

[Código --> aquí](usoPunterosConArreglosBidimensionales.c)