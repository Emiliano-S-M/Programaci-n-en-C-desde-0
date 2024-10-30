# `if-else` en C

La estructura selectiva doble, representada por if-else, es una herramienta fundamental en la programación que permite tomar decisiones en función de la evaluación de una condición. Su estructura básica es la siguiente:

```c
if (condición) {
    // Bloque de código a ejecutar si la condición es verdadera
} else {
    // Bloque de código a ejecutar si la condición es falsa
}
```

- Se evalúa la condición especificada dentro del if. Si esta condición es verdadera, se ejecuta el bloque de código asociado al if.
- Si la condición es falsa, se ejecuta el bloque de código asociado al else.
- La estructura if-else asegura que una y solo una de las ramas de código (la del if o la del else) será ejecutada, dependiendo del resultado de la evaluación de la condición.

Esta estructura es extremadamente útil cuando se necesita realizar una bifurcación en el flujo del programa basada en una condición. Por ejemplo, en un programa de verificación de acceso, el if podría verificar si las credenciales de usuario son correctas, mientras que el else podría manejar la situación en la que las credenciales no son correctas.

El uso de la estructura selectiva doble permite escribir código más claro y legible al incorporar lógica condicional para manejar diferentes escenarios dentro de un programa.

Por ejemplo, el siguiente diagrama de flujo que representa un if-else.

[![if-else.jpg](https://i.postimg.cc/Kjp3B2HS/if-else.jpg)](https://postimg.cc/CnDKpW0m)

En este diagrama, apreciamos que solicita un dato que será almacenado en la variable PRO, el cual representa un promedio.
Luego, en un `if-else` se condiciona el camino con que, si promedio es mayor o igual **>=** entonces es aprobado, en caso contrario, reprobado.
Finalmente, muestra el mensaje correspondiente y finaliza el programa.

Para ver el código de este ejemplo [--> clic aquí](if-else.c)