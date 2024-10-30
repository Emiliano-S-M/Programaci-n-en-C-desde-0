# Paso de parámetros por referencia.

Como ya sabemos, en C, los parámetros se pasan por valor de forma predeterminada, lo que significa que cuando pasas una variable a una función, se crea una copia de esa variable y cualquier modificación realizada dentro de la función no afectará a la variable original fuera de ella. Sin embargo, podemos simular el paso por referencia utilizando punteros.

Trabajemos el mismo caso que trabajamos en paso de parámetros por valor, pero con las modificaciones correspondientes para trabajarlo por referencia.

[![16-05-2024-0001.jpg](https://i.postimg.cc/ZqwMffBJ/16-05-2024-0001.jpg)](https://postimg.cc/06Jnj004)

Como puedes notar, en este caso utilizamos el símbolo `&`, esto es, porque cuando pasamos un argumento por referencia a una función en C, debemos pasar la dirección de memoria de la variable que queremos modificar, y para ello utilizamos operador de dirección `&` para obtener la dirección de memoria de la variable especificada.

Dentro de nuestra función, utilizamos el asterisco `*` en dos contextos diferentes de la función.

- **En la declaración del parámetro `int *a`:** Aquí, el asterisco indica que `a` es un puntero a un entero. Esto significa que `a` contiene la dirección de memoria de una variable entera, en lugar de contener el valor de la variable en sí.

- **En el uso de `*a` dentro de la función:** Aquí, el asterisco es el operador de indirección. Cuando usamos `*a`, estamos accediendo al valor almacenado en la dirección de memoria que `a` está apuntando. Es decir, estamos accediendo al valor de la variable a la que apunta el puntero `a`.

Entonces, cuando vemos `*a = *a * 2;`, estamos diciendo "el valor apuntado por `a` es igual al valor apuntado por `a`, multiplicado por 2".

[Código --> aquí](referencia.c)