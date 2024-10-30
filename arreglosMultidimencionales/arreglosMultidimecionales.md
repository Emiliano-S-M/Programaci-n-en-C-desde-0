# Arreglos multidimensionales.

Los arreglos multidimensionales son arreglos de más de dos dimensiones, son similares a los bidimensionales, excepto porque cada elemento se debe referenciar por medio de tres o más índices.

A partir de tres dimensiones, los arreglos pueden visualizarse como un conjunto de matrices en el espacio tridimensional y, más allá, en dimensiones superiores.

**Consideraciones Importantes**
- Memoria: Los arreglos multidimensionales pueden consumir mucha memoria rápidamente. Por ejemplo, un arreglo de tamaño 10x10x10x10 tiene 10,000 elementos, cada uno ocupando el tamaño de un int (generalmente 4 bytes), resultando en 40,000 bytes (o aproximadamente 40 KB) de memoria.
- Índices: Todos los índices empiezan en 0 y van hasta n-1 donde n es el tamaño de la dimensión correspondiente.
- Complejidad: A medida que se aumentan las dimensiones, el código puede volverse más complejo y difícil de gestionar. Es importante planificar y documentar bien el uso de tales estructuras.

Para entenderlo mejor, haremos un arreglo tridimensional y un arreglo multidimensional de 4 dimensiones.

Para ellos veamos sus respectivos diagramas de flujo:

[![20-05-2024-0006.jpg](https://i.postimg.cc/Fs1sBNpn/20-05-2024-0006.jpg)](https://postimg.cc/svdrBFtp)

Este es un diagrama de flujo que representa la creación de un arreglo tridimensional, y que, además, se llena de forma automática en cada ciclo.

[Código --> aquí.](arreglosBidimencionales.c)


A continuación, vemos un diagrama de flujo para representar la creación de un arreglo de 4 dimensiones, y que, además, también se llena de forma automática en cada ciclo.

[![20-05-2024-0007.jpg](https://i.postimg.cc/fTDsXZtr/20-05-2024-0007.jpg)](https://postimg.cc/w3fn8CkX)

[Código --> aquí.](arreglosMultidimecionales.c)



