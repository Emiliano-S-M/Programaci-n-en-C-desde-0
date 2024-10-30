# Estructuras de datos


En el lenguaje de programación C, las estructuras de datos son un tipo de dato definido por el usuario que permite agrupar variables relacionadas bajo un mismo nombre. Estas variables, conocidas como miembros de la estructura, pueden ser de distintos tipos de datos básicos o incluso de otras estructuras.

Las estructuras de datos en C ofrecen diversas ventajas:

- **Organización de datos**: Permiten organizar y agrupar datos relacionados de manera lógica, facilitando su manejo y comprensión.

- **Eficiencia de memoria**: Al agrupar datos relacionados, las estructuras de datos optimizan el uso de la memoria, ya que se evita la necesidad de declarar variables independientes para cada dato.

- **Flexibilidad**: Permiten crear estructuras personalizadas que se adaptan a las necesidades específicas del programador.

- **Modularidad**: Promueven la modularidad del código, porque se pueden crear estructuras que encapsulan datos y funciones relacionadas.

- **Uso en diversas aplicaciones**: Las estructuras de datos en C tienen un amplio campo de aplicación, desde el almacenamiento de información simple hasta la implementación de estructuras de datos complejas como listas, pilas, árboles y grafos.

Para declarar una estructura en C, se utiliza la palabra clave struct seguida del nombre de la estructura y una llave que contiene la definición de sus miembros. La definición de cada miembro incluye su tipo de dato y un nombre.

Ejemplo de declaración de una estructura Punto:

```c
struct Punto {
  int x;
  int y;
};
```
En este ejemplo, la estructura Punto tiene dos miembros: `x` y `y`, ambos de tipo entero, que representan las coordenadas de un punto en el plano cartesiano.

Las estructuras de datos en C son una herramienta fundamental para la organización y manejo eficiente de datos en programas complejos.

Veamos un ejemplo:

[![24-05-2024-0003.jpg](https://i.postimg.cc/05YxfNvv/24-05-2024-0003.jpg)](https://postimg.cc/23SPjr39)

[Código --> aquí](estructuras.c)