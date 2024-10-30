# Sintaxis de una función.


La sintaxis básica de una función en C es la siguiente:

```c
tipo_de_retorno nombre_de_la_funcion(parametros) {
    // Cuerpo de la función
}
```

- **tipo_de_retorno:** Especifica el tipo de dato que la función devuelve como resultado después de su ejecución. Puede ser void si la función no devuelve ningún valor, o cualquier otro tipo de dato (int, float, char, etc.) si la función devuelve un valor de ese tipo.

- **nombre_de_la_funcion:** Es el identificador único de la función que se utiliza para llamarla desde otras partes del programa.

- **Parámetros:** Son los valores que se pueden pasar a la función para que la función pueda realizar su tarea. Los parámetros son opcionales y pueden ser de cualquier tipo de dato. Si la función no toma ningún argumento, los paréntesis estarán vacíos ().

- **Cuerpo de la función:** Contiene las instrucciones que definen lo que hace la función. Estas instrucciones pueden incluir declaraciones de variables, operaciones matemáticas, llamadas a otras funciones, etc.

Por ejemplo, aquí hay una función llamada suma que toma dos enteros como argumentos y devuelve la suma de esos dos números.

[![15-05-2024-0004.jpg](https://i.postimg.cc/LsqtVTcZ/15-05-2024-0004.jpg)](https://postimg.cc/p9H5WDX2)

Aquí, la función o subproceso de suma está representada en otro diagrama, y este se ejecuta al momento de asignar el valor devuelto por la función suma a Z, y posteriormente continuamos con el programa de forma normal.

Como puedes notar, aquí empleamos dos nuevos símbolos.

[![15-05-2024-0005.jpg](https://i.postimg.cc/vZZL4MXh/15-05-2024-0005.jpg)](https://postimg.cc/TpBWszz5)


---
[Código --> aquí](funcion.c)