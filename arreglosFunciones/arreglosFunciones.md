# Paso de Arreglos a Funciones usando Apuntadores

 Esta técnica es esencial para manejar arreglos de manera eficiente, especialmente cuando se trata de modificar el contenido del arreglo dentro de una función.

Cuando pasas un arreglo a una función, realmente estás pasando un puntero al primer elemento del arreglo. Esto significa que cualquier modificación que hagas a los elementos del arreglo dentro de la función afectará el arreglo original.

Para declarar una función que recibe un arreglo, se declara un parámetro como un puntero.

```c
void imprimirArreglo(int *ptr, int size);
```

En esta declaración:

- `int *ptr` es un puntero a un entero, que apuntará al primer elemento del arreglo.
- `int size` es el tamaño del arreglo, para que la función sepa cuántos elementos debe procesar.

La implementación de la función podemos hacerla de tal forma que imprima todos los elementos del arreglo:

```c
void imprimirArreglo(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Elemento en ptr[%d] = %d\n", i, *(ptr + i));
    }
}
```

En esta implementación:

- El bucle for recorre el arreglo usando la aritmética de punteros.
- *(ptr + i) accede al elemento en la posición i.

Ahora vamos a ver cómo se llama a esta función desde main pasando un arreglo:

```c
void main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    imprimirArreglo(arr, 5); // Pasar el arreglo a la función

    getchar();
}
```

En esta llamada:

- `arr` se pasa como argumento a imprimirArreglo. `arr` es equivalente a `&arr[0]`, es decir, es un puntero al primer elemento del arreglo.
- `5` es el tamaño del arreglo.

Puedes modificar el contenido del arreglo dentro de la función de la siguiente manera:

```c
void doblarElementos(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) *= 2; // Doble el valor de cada elemento
    }
}
```

Recuerda que esto modificara el contenido original del arreglo, por lo que el arreglo Original, tomara los nuevos valores del arreglo durante la ejecución de la función doblarElementos, esto ya que estamos pasando la dirección de memoria en el arreglo, es decir, estamos haciendo un pase de parámetros por referencia.

Veamos un ejemplo:

[![18-05-2024-0007.jpg](https://i.postimg.cc/3whbnN8V/18-05-2024-0007.jpg)](https://postimg.cc/dhWB0qTj)


[Código --> aquí.](arreglosFunciones.c)
