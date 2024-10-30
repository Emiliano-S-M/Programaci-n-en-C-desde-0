# Uniones

En C, las uniones representan un tipo de datos estructurado, similar a las estructuras. Sin embargo, se distinguen fundamentalmente porque sus miembros comparten el mismo espacio de almacenamiento en la memoria interna rápida de la computadora. Esta característica las hace muy útiles para ahorrar memoria.

Es importante tener en cuenta que las uniones solo pueden utilizarse en aplicaciones donde sus componentes no reciban valores al mismo tiempo. Esto significa que solo uno de sus componentes puede recibir valor en un momento dado. Por lo tanto, al modificar un miembro de una unión, los otros miembros pueden verse afectados si comparten la misma ubicación de memoria.

Formalmente, una unión se define como una colección de elementos finita y heterogénea, donde solo uno de sus componentes puede recibir valor a la vez. El espacio de memoria reservado para una unión corresponde a la capacidad del campo de mayor tamaño. 

Supongamos que debemos almacenar la siguiente información de cada alumno de
una universidad:
- Matrícula del alumno (entero).
- Nombre del alumno (cadena de caracteres).
- Carrera del alumno (cadena de caracteres).
- Promedio del alumno (real).
- Teléfono celular (cadena de caracteres).
- Correo electrónico (cadena de caracteres).


Puedes ver el código [--> aquí](uniones.c)