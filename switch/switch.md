# Condicional múltiple `switch`

El condicional múltiple `switch` es otra **estructura de control** en lenguajes de programación como **C** que permite tomar decisiones basadas en el valor de una variable o expresión. **A diferencia** del condicional simple if, el condicional doble if-else, que **evalúan una condición booleana**, el ***switch evalúa una expresión*** y luego ejecuta código correspondiente a diferentes casos que coincidan con valores específicos de esa expresión.

La sintaxis básica de un switch es la siguiente:

```c
switch (expresión) {
    case valor1:
        // Código a ejecutar si la expresión es igual a valor1
        break;
    case valor2:
        // Código a ejecutar si la expresión es igual a valor2
        break;
    // Otros casos posibles...
    default:
        // Código a ejecutar si ninguno de los casos anteriores se cumple
}
```

La expresión se evalúa una vez y el valor resultante se compara con los valores especificados en los casos (case).

Si hay una coincidencia entre el valor de la expresión y el valor de uno de los casos, se ejecuta el bloque de código correspondiente a ese caso.

La palabra clave **`break` se utiliza para salir del `switch`** después de que se ha ejecutado el bloque de código correspondiente a un caso. Si no hay un break, la ejecución continuará en los siguientes casos sin importar si sus valores coinciden o no.

    El bloque de código asociado al default se ejecutará si ninguno de los casos anteriores coincide con el valor de la expresión.

El default es opcional y se puede omitir si no se necesita una acción por defecto.

El condicional múltiple switch es útil cuando se necesita realizar diferentes acciones dependiendo del valor de una variable o expresión, y cuando hay múltiples casos a considerar. Es especialmente útil cuando hay una serie de opciones claras y bien definidas que pueden evaluarse de manera eficiente.

Por ejemplo, el siguiente `switch` para mostrar un mensaje.

[![Switch.jpg](https://i.postimg.cc/QdhZbGLv/Switch.jpg)](https://postimg.cc/7fsRHRZN)


En este caso, el switch lee una opción, y basándonos en lo que se seleccione, se muestra el respectivo caso seleccionado.

Puedes ver el código [--> aquí](switch.c)