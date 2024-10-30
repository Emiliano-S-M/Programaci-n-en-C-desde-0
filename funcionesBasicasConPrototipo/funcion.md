# Sintaxis de una función con prototipo de la función.

El prototipo de una función es una declaración que proporciona información al compilador sobre la firma de la función antes de que se defina. Esto incluye el tipo de retorno de la función, su nombre y los tipos de datos de los parámetros que espera.

El prototipo de una función se utiliza para informar al compilador sobre la existencia y la estructura de la función antes de que se llame a esa función en el programa. Esto es útil cuando la definición de la función aparece después de su primer uso en el código, como es el caso de funciones definidas después de la función `main()`.

La sintaxis básica de un prototipo de función es similar a la de una declaración de función, pero sin el cuerpo de la función. Aquí hay un ejemplo de cómo se ve un prototipo de función:

```c
tipo_de_retorno nombre_de_la_funcion(tipo_de_dato parametro1, tipo_de_dato parametro2, ...);
```

Para el ejemplo visto anteriormente: 

[![15-05-2024-0004.jpg](https://i.postimg.cc/LsqtVTcZ/15-05-2024-0004.jpg)](https://postimg.cc/p9H5WDX2)

El prototipo de la función se vería algo así.

```c
int suma(int a, int b);
```

Posteriormente, tenemos nuestro código principal `main()`

```c
void main(void) {
    /*Otro codigo aqui...*/
    suma(x,y); 
    /* 
    Llamada a la funcion y se le pasa como 
    parametros los valores de "x" y de "y"
    */
}
```

Después del bloque main es donde definimos nuestra función.

```c
int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}
```

[Código --> aquí.](funcion.c)