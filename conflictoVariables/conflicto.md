# Conflicto en los nombres de las Variables.

Cuando una función tiene una variable local con el mismo nombre que una variable global, la variable local tiene prioridad dentro del alcance de esa función. Esto significa que cualquier referencia a esa variable dentro de la función se refiere a la variable local y no a la global.

Sin embargo, hay casos en los que necesitamos hacer referencia explícita a la variable global desde dentro de una función que tiene una variable local con el mismo nombre. En esos casos, es necesario distinguir de alguna manera ambas variables.

Por ejemplo, si tenemos una variable global `i` y una variable local `i` dentro de una función, y queremos hacer referencia a la variable global `i` desde dentro de esa función, podemos hacerlo renombrando la variable global de la forma `global_i`.

[![15-05-2024-0006.jpg](https://i.postimg.cc/4dXHKQQc/15-05-2024-0006.jpg)](https://postimg.cc/yJr8t956)

Como puedes ver en el diagrama anterior, para la declaración de variables Globales o Locales en un diagrama de flujo, especificamos el tipo de variable, pero esto solo es necesario si tendremos estos dos tipos de variables.

Otro aspecto a tomar en cuenta, es que, así como las funciones, las variables globales están definidas dentro de un rectángulo redondeado.

Este rectángulo únicamente está conectado a donde es llamado, en este caso en la impresión del mensaje.

[Código --> aquí.](conflicto.c)
