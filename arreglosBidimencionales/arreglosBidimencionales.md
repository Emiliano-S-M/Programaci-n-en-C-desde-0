# Arreglos bidimensionales

Los arreglos bidimensionales, también conocidos como matrices, son arreglos que contienen otros arreglos como elementos. Esto se utiliza para representar estructuras de datos en dos dimensiones, como una tabla o una matriz matemática.

Un arreglo bidimensional permite almacenar **N x M elementos** del mismo tipo (enteros, reales, caracteres, cadenas de caracteres, etc.) y acceder a cada uno de ellos. Al igual que en los arreglos unidimensionales, se distinguen dos partes importantes: **los componentes y los índices**. Los primeros hacen referencia a los elementos que se almacenan en cada una de sus casillas, y los segundos, por otra parte, especifican la forma de acceder a cada uno de los elementos. Para hacer referencia a un componente de un arreglo bidimensional debemos utilizar tanto el nombre del arreglo, como los índices del elemento (fila y columna).

Para poner un ejemplo, un arreglo bidimensional, se podría decir que se ve algo así:

[![19-05-2024-0001.jpg](https://i.postimg.cc/MpBN5h9G/19-05-2024-0001.jpg)](https://postimg.cc/DS2xyYkV)

Un arreglo bidimensional se declara especificando el tipo de los elementos, seguido de dos conjuntos de corchetes que indican el número de filas y columnas, por ejemplo:

```c
int miArreglo[5][4];
```

Esto nos generaría una tabla como la siguiente:

[![19-05-2024-0002.jpg](https://i.postimg.cc/4NVjbDLx/19-05-2024-0002.jpg)](https://postimg.cc/Whp9sHcB)

Aunque recuerda que, independiente del arreglo, el conteo siempre comenzará en 0, entonces el arreglo se vería algo así:


[![19-05-2024-0003.jpg](https://i.postimg.cc/LsCW82XN/19-05-2024-0003.jpg)](https://postimg.cc/5HzgPc8C)

Al igual que en un arreglo unidimensional, podemos inicializar un arreglo directamente desde el código:

```c
int miArreglo[5][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12};
    {13,14,15,16},
    {17,18,19,20}
}
```
Por lo que nuestra matriz tendrá los siguientes elementos:

[![19-05-2024-0004.jpg](https://i.postimg.cc/pr4xhKLc/19-05-2024-0004.jpg)](https://postimg.cc/Mf7ggMR1)

Para acceder a alguno de los elementos, tendríamos que hacerlo especificando tanto la fila, como la columna donde se encuentra dicho elemento.

```c
int valor = miArreglo[0][3];
```

Con esto, estaríamos accediendo a la casilla que contiene el número `4`.

Veamos un ejemplo:

[![20-05-2024-0001.jpg](https://i.postimg.cc/d1Q0xn2Z/20-05-2024-0001.jpg)](https://postimg.cc/kVZ9VQh7)

Este diagrama de flujo refleja como primera instancia la creación de una variable llamada `miArreglo[5][4]` que es una matriz de “5x4”, así como la creación de una variable llamada contador.

Después creamos un ciclo for que se ejecutara mientras que "i" sea menor que 5, y a la variable i la inicializamos en cero, además de que en cada vuelta del ciclo, i aumentara en uno

Dentro de este ciclo, creamos un segundo ciclo, que iterara sobre "j", la cual se inicializa en 0, y se ejecutara mientras que j sea menor 4, además de que en cada ciclo, j aumentara en uno.

Dentro del ciclo de "j", se asignan valores a miArreglo, en las posiciones específicas de `[i][j]`, el valor asignado es el valor actual de contador.

Cada vez que j llega a 3, sale del ciclo y se ejecuta nuevamente la comprobación para i, si i aún es menor que 5, nuevamente se ejecuta un ciclo para j donde j nuevamente vale 0

Una vez que i alcanza un valor de 4, salimos del arreglo bidimensional, y ejecutamos el segundo arreglo, el cual corresponde a la impresión de los valores de `miArreglo`, la estructura lógica es similar, la diferencia es que únicamente imprimimos los valores de mi arreglo acorde a cada ciclo para i, y para j.

[Código --> aquí](arreglosBidimencionales.c)