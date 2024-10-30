# Paso de funciones como parámetros

El paso de funciones como parámetros en C es una característica que permite a una función recibir como argumento otra función. Esto es posible en C debido a que en este lenguaje las funciones son tratadas como punteros a funciones.

Cuando pasas una función como parámetro a otra función en C, estás permitiendo que la función receptora utilicé la función pasada como parámetro dentro de su cuerpo. Esto es útil en situaciones en las que necesitas una función genérica que pueda realizar una tarea específica y esa tarea pueda ser definida por el usuario.

Por ejemplo, tenemos el siguiente diagrama de flujo: 

[![16-05-2024-0003.jpg](https://i.postimg.cc/hGQhxXHS/16-05-2024-0003.jpg)](https://postimg.cc/CZYFpxht)

En este, tenemos una función principal, la cual llama a una segunda función o subrutina llamada operación, la cual recibe como parámetros los datos de la variable `X` y `Y`, así como el nombre de la función que se desee ejecutar. En este caso, se ejecuta dos veces, una primera con la subrutina suma, y una segunda con la subrutina resta.

Dentro de la función operación, vemos que la variable resultado, es igual al valor devuelto por "X" función que se mande a llamar, por ejemplo, si mandamos a llamar a la función suma en resultado, y vemos el diagrama de flujo, podemos observar que el valor devuelto será igual a la suma de los datos pasados en las variables `a` y `b`.

De igual forma, con las demás funciones, al mandarlas llamar, el resultado sería igual al valor devuelto por dicha función.

[Código --> aquí](funcionesParametros.c)