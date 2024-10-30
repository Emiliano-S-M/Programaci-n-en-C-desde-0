# Programacion en C

## Bienvenida

¡Bienvenido al repositorio **Aprendiendo C y Diagramas de Flujo**

¿Quieres aprender programación desde cero? ¡Estás en el lugar adecuado! En este repositorio, nos enfocamos en proporcionar recursos y ejemplos prácticos para que puedas iniciarte en el mundo de la programación, sin importar tu nivel de experiencia.

El objetivo es brindarte las herramientas necesarias para que puedas comprender los conceptos básicos desde cero y progresar en tu aprendizaje de manera sólida. Además de aprender a programar, también te ayudaremos a familiarizarte con la creación y lectura de diagramas de flujo, una habilidad fundamental en el desarrollo de software.

Una vez que hayas dominado los fundamentos, te invitamos a explorar los programas que hemos compartido en este repositorio. Son ejemplos prácticos que te ayudarán a consolidar tus conocimientos y te inspirarán para tus propios proyectos.

Pero aquí no termina todo. ¡Queremos que seas parte de nuestra comunidad! Te invitamos a colaborar con nuevos proyectos, compartir tus ideas y aprender junto a otros entusiastas de la programación. Juntos, podemos crear un ambiente de aprendizaje colaborativo donde todos podamos crecer y mejorar como desarrolladores.

¡Únete a nosotros en este emocionante viaje hacia el mundo de la programación! ¡Estamos emocionados de tenerte aquí!.



## Introduccion a la Programación
Esencialmente, la programación es dar solución a los problemas mediante algoritmos. Estos algoritmos deben de seguir ciertos pasos para poder ser funciónales y consistentes.

> Formalmente, definimos la programación como un conjunto de pasos, procedimientos o acciones, que nos permiten alcanzar un resultado o resolver un problema.

Para entender más en profundidad la programación, nos basaremos en el lenguaje de programación de **C**.

Y para que sea fácil de entender, veremos todo desde los conceptos más básicos.

- [Diagramas de flujo](#diagramas-de-flujo)
  - [Reglas para la construccion de un diagrama de flujo](#reglas-para-la-construccion-de-un-diagrama-de-flujo)
  - [Simbolos utilizados en los diagramas de flujo](#símbolos-utilizados-en-los-diagramas-de-flujo)
- [Tipos de datos](#tipos-de-datos)
    - [Palabras Reservadas](#palabras-reservadas)
    - [Constantes](#constantes)
    - [Variables](#variables)
- [Operadores](#operadores)
    - [Operadores aritmeticos](#operadores-aritmeticos)
      - [Operadores atirmeticos simplificados](#operadores-aritmeticos-simplificados)
    - [Operadores de incremento y decremento](#operadores-de-incremento-y-decremento)
    - [Expresiones logicas](#expresiones-logicas)
    - [Operadores Relacionales](#operadores-relacionales)
    - [Operadores Logicos y el Operador Coma](#operadores-logicos-y-el-operador-coma)
    - [Prioridad de los operadores](#prioridad-de-los-operadores)

- [Funciones](#funciones)
  - [Variables Locales, Globales y Estaticas](#variables-locales-globales-y-estaticas)
    - [Variables Locales](#variables-locales)
    - [Variables Globales](#variables-globales)
    - [Variables Estaticas](#variables-estaticas)
- [Arreglos](#arreglos)
  - [Caracteristicas](#características-principales)
  - [Ventajas](#ventajas-de-los-arreglos)
  - [Desventajas](#desventajas-de-los-arreglos)
  - [Aplicaciones](#aplicaciones-comunes-de-los-arreglos)
  - [Gestion de Memoria](#gestión-de-memoria-en-arreglos)
- [Caracteres y cadenas de Caracteres](#caracteres-y-cadenas-de-caracteres)
    - [Datos Simples](#datos-simples)
    - [Datos Estructurados](#datos-estructurados)
    - [Importancia de los datos Simples y Estructurados](#importancia-de-los-datos-simples-y-estructurados)
    - [Gestion de Memoria](#gestión-de-memoria)




- [Programas y Diagramas de Flujo para entender el lenguaje C](#programas-y-diagramas-de-flujo-para-entender-el-lenguaje-c)
  - [Introduccion a los fundamentos de C](#introduccion-a-los-fundamentos-de-c)
    - [Mi primer 'Hola mundo'](holaMundo/holaMundo.md)
    - [Caracteres de Control](caracteresDeControl/caracteresDeControl.md)
    - [Formato de Variables](formatoDeVariables/formatoDeVariables.md)
    - [Lectura de datos 1](lecturaDeDatos/lecturaDeDatos.md)
    - [Lectura de datos 2](lecturaDeDatos2/lecturaDeDatos2.md)
    - [Procesamiento de datos](procesamientoDeDatos/procesamientoDeDatos.md)
    - [Lbreria Math.h](libreriaMath/libreriaMath.md)
  - [Estructuras selectivas en C](#estructuras-selectivas-en-c)
    - [Condicional **`if`**](if/if.md)
    - [Condicional doble **`if` `else`**](if-else/if-else.md)
    - [Condicional multiple **`switch`**](switch/switch.md)

## Diagramas de Flujo
> Los diagramas de flujo representan la esquematización gráfica de un algoritmo.

Es decir, que muestra gráficamente los pasos y procesos a seguir para alcanzar la solución de un problema, y debido a esto es que es muy importante construirlos correctamente, y deben de poder ser aplicados y desarrollados en cualquier lenguaje de programación.

### Reglas para la construccion de un diagrama de flujo
Los diagramas de flujo deben de cumplir con ciertas características para que puedan ser legibles, entendibles, escalables, y aplicables. 
    
1. Todo diagrama de flujo debe de tener un **inicio** y un **fin**.
1. Las líneas utilizadas para indicar la dirección del diagrama de flujo deben de ser rectas, verticales, u horizontales.
1. Todas las líneas utilizadas para indicar la dirección del flujo del diagrama deben estar conectadas. Esta conexión puede ser a un símbolo que exprese lectura, proceso, decisión o fin.
1. El diagrama de flujo debe de construirse de arriba hacia abajo y de izquierda a derecha.
1. La notación utilizada en el diagrama de flujo debe ser independiente del lenguaje de programación, es decir, que la solución propuesta en el diagrama de flujo debe poder ser escribible en cualquier lenguaje de programación.
1. Al realizar una tarea compleja, debemos escribir comentarios que ayuden a entender lo que hallamos hecho.
1. No puede llegar más de una línea a un símbolo determinado.
1. Utilizar símbolos estándar reconocidos internacionalmente para representar acciones, procesos, decisiones, entrada/salida, entre otros, para asegurar la comprensión universal del diagrama.
1. Mantener consistencia en el uso de símbolos y conexiones en todo el diagrama para evitar confusiones y facilitar la comprensión.
1. Dividir el diagrama en módulos o subprocesos más pequeños y claros, conectados entre sí, para facilitar la comprensión y la gestión de la complejidad.
1. Evitar símbolos o conexiones ambiguas que puedan ser interpretadas de diferentes maneras, lo que podría llevar a confusiones o errores en la implementación.
1. Limitar la cantidad de bifurcaciones en el diagrama para mantener la simplicidad y evitar la complejidad excesiva, lo que facilita la comprensión y la depuración del algoritmo.
1. Realizar revisiones y validaciones periódicas del diagrama de flujo con colegas o expertos en el dominio para garantizar su corrección y eficacia en la resolución del problema.

### Símbolos utilizados en los diagramas de flujo.

[![Diagrama-Uno.jpg](https://i.postimg.cc/5NJXbjZT/Diagrama-Uno.jpg)](https://postimg.cc/HjSYtWW9)

## Tipos de datos.
Los datos que puede procesar una computadora se clasifican en datos que van desde simples, hasta datos mas complejos o estructurados.

La principal caracteristica de los tipos de datos simples es que solo ocupan una casilla de memoria.

La principal caracteristica de los tipos de datos estructurados es que permiten agrupar varios tipos de datos relacionados bajo un solo nombre. Esto facilita la organización y manipulación de datos complejos al proporcionar una forma de encapsular y acceder a múltiples valores relacionados como una unidad coherente. 

Los tipos de datos estructurados también pueden contener tipos de datos simples y otros tipos de datos estructurados, lo que permite una representación más flexible y organizada de la información en programas.

### Palabras reservadas.
En el lenguaje de programación C asi como en muchos otros lenguajes, existen palabras reservadas del lenguaje que no se pueden utilizar para nombrar otros datos. En la siguiente tabla se muestran algunas de las palabras reservadas del lenguaje C.

[![Diagrama-Tres.jpg](https://i.postimg.cc/3Rn9FP5F/Diagrama-Tres.jpg)](https://postimg.cc/wyRh64B1)

### Constantes
Las connstantes son tipos de datos que no cambian durante la ejecucion del programa, para nombrarlas utilizamos identificadores. Existen constantes de todos los tipos de datos.

Las constantes **"se deben definir antes de comenzar el programa principal"** y estas constantes no cambiaran su valor durante la ejecucion del programa. Las formas de definir constantes son:

Declarando que estamos trabajando con una constante.

```c
const int nu1 = 20;     /*nu1 es una constante de tipo entero*/
const int nu2 = 15;     /*nu2 es una constante de tipo entero*/
const float re1 = 2.18; /*re1 es una constante de tipo real*/
const char ca1 = 'f';   /*ca1 es una constante de tipo caracter*/
```

Usando Define.

```c
#define nu1 20;     /*nu1 es una constante de tipo entero*/
#define nu2 15;     /*nu2 es una constante de tipo entero*/
#define re1 2.18;   /*re1 es una constante de tipo real*/
#define ca1 = 'f';  /*ca1 es una constante de tipo caracter*/
```


Existe una forma mas de nombrar las constantes, y es utilizando el metodo enumerador: `enum`. Los valores con enum se asignan de forma predeterminada en incremento unitario, comenzando con el 0.

`enum { va0, va1, va2, va3};`

con esto definimos cuatro constantes enteras, esta definicion de constantes, es equivalente a hacer esto.

```c
const int va0 = 0;
const int va1 = 1;
const int va2 = 2;
const int va3 = 3;
```

El uso de las constantes es bastante util si tenemos datos que no van a cambiar durante la ejecucion de nuestro codigo, por ejemplo, si estamos creando un programa para determinar el area de un circulo, utilizariamos la formula:

`Area =  π×r²`

De la cual sabemos que `π` es una constante que siempre valdra `3,1415`, por lo que seria util declararla como una constante en nuestro codigo, ya que no modificaremos el valor de esta variable durante la ejecucion de nuestro programa.

### Variables
Las variables son objetos que como su nombre lo dice, pueden variar o cambiar su valor durante la ejecucion de un programa. Para nombrar las vairiables tambien se utilizan identificadores. Asi como con las constantes, las variables pueden ser de todos los tipos de datos.

[![variables-en-C.png](https://i.postimg.cc/Pq3nPV30/variables-en-C.png)](https://postimg.cc/v1VNKhdv)

Una vez declaradas las variables, las mismas pueden obtener un valor a través de un bloque de asignación. Esta asignación elimina cualquier otro valor que la variable tenga actualmente, y le asigna el nuevo valor. El formato de la asignación de una variable es el siguiente.

**<center> variable = expresion o valor;</center>**

Existen dos formas de declarar variables y asignar valores a las mismas. La primera es creando la variable y posteriormente asignarle un valor:

[![variables-en-C.png](https://i.postimg.cc/2yBYpdxM/variables-en-C.png)](https://postimg.cc/rRc3xr3N)


La otra forma igualmente correcta de hacer la asignacion de un valor a una variable, es cuando se realiza la declaracion de la misma:

[![variables-en-C.png](https://i.postimg.cc/qR6B0dJ1/variables-en-C.png)](https://postimg.cc/DJF3dHbG)


Es realmente importante destacar que los nombres de las variables deben de ser representativos de la función que cumplen en el programa.

## Operadores
Los operadores aritméticos nos permiten realizar operaciones. Podemos distinguir entre algunos tipos de operadores, los cuales son aritméticos, relacionales y lógicos.

### Operadores Aritmeticos.
Los operadores aritméticos nos permiten realizar operaciones entre operandos, números, constantes o variables.

Para la siguiente tabla considere:

`int x;` <br>
`float v;`

[![Operadores-Aritmeticos.jpg](https://i.postimg.cc/GhwFWLLS/Operadores-Aritmeticos.jpg)](https://postimg.cc/hhsQxq79)

Al realizar operaciones que contienen operadores aritméticos, se respeta la jerarquía de los operadores y se aplican de izquierda a derecha. Además, si una expresión contiene sub expresiones entre paréntesis, estas se evalúan primero.

[![Operaciones.jpg](https://i.postimg.cc/ncWJFPW5/Operaciones.jpg)](https://postimg.cc/mt7qV8BN)

A continuación se muestra la jerarquía de los operadores.

[![Jerarquia.jpg](https://i.postimg.cc/sX3FHdBB/Jerarquia.jpg)](https://postimg.cc/kVYhDHv9)

#### Operadores Aritmeticos simplificados.
Una característica importante del lenguaje **C** es la forma como se puede **simplificar** el uso de los operadores aritméticos.

Para los siguientes ejemplos, considere que:

`int x, y;`

[![Operadores-Simplificados.jpg](https://i.postimg.cc/QNB7X0jz/Operadores-Simplificados.jpg)](https://postimg.cc/4ngyPv7v)

### Operadores de incremento y decremento.

Los operadores de incremento y decremento son operadores utilizados en programación para aumentar o disminuir el valor de una variable en una unidad, respectivamente. Estos operadores son comunes en muchos lenguajes de programación como C, C++, Java, y otros.

***El operador de incremento*** se denota con dos signos de suma consecutivos (++). Se utiliza para aumentar el valor de una variable en una unidad. Puede ser utilizado de dos maneras:

- **Prefijo (++variable):** Incrementa el valor de la variable y luego devuelve el valor incrementado.
- **Sufijo (variable++):** Devuelve el valor actual de la variable y luego incrementa su valor.

***El operador de decremento*** se denota con dos signos de resta consecutivos (--). Se utiliza para disminuir el valor de una variable en una unidad. Al igual que el operador de incremento, puede ser utilizado de dos maneras:

- **Prefijo (--variable):** Decrementa el valor de la variable y luego devuelve el valor decrementado.
- **Sufijo (variable--):** Devuelve el valor actual de la variable y luego decrementa su valor.

Para los siguientes ejemplos, considere que:

`int x, y;`

```c
//Esto es para el operador de INCREMENTO
int x = 5;
int y = ++x; // Incrementa x a 6 y luego asigna 6 a y

//Esto es para el operador de DECREMENTO
int x = 5;
int y = x--; // Asigna 5 a y y luego decrementa x a 4
```

Es importante tener en cuenta que los operadores de incremento y decremento pueden tener diferentes efectos dependiendo de si se utilizan como prefijo o sufijo, por lo que es crucial comprender su comportamiento para evitar confusiones en el código. Además, su uso excesivo puede dificultar la comprensión del código, por lo que se recomienda utilizarlos con moderación y en situaciones donde su uso mejore la legibilidad y la eficiencia del código.

### Expresiones Logicas.

Las expresiones lógicas, también conocidas como **expresiones booleanas**, son expresiones que representan **valores de verdad**, es decir, valores que son **verdaderos o falsos**. Estas expresiones se utilizan comúnmente en programación para **tomar decisiones basadas en condiciones lógicas**.

Una expresión lógica puede ser tan simple como una **comparación entre dos valores**, o puede ser más compleja y combinar múltiples condiciones lógicas utilizando operadores lógicos como **AND, OR y NOT**.

En la mayoría de los lenguajes de programación, las expresiones lógicas **se evalúan como verdaderas (true) o falsas (false)**. Estos valores de verdad se utilizan luego en estructuras de control como condicionales (if, else) y bucles (while, for) para controlar el flujo del programa.

### Operadores Relacionales

Los operadores relacionales son operadores que se utilizan para comparar dos valores y determinar la relación entre ellos. Estos operadores se utilizan comúnmente para construir expresiones lógicas que evalúan si una condición es verdadera o falsa.

[![Operadores-Relacionales.jpg](https://i.postimg.cc/5ypTKbjP/Operadores-Relacionales.jpg)](https://postimg.cc/m1zmtxYM)

### Operadores Logicos y el Operador Coma.


Los operadores lógicos son operadores que se utilizan para combinar o modificar expresiones lógicas. Estos operadores se utilizan para formar condiciones más complejas al trabajar con expresiones booleanas. Los operadores lógicos más comunes son:

- AND
- OR
- NOT

**AND lógico (&&):** También conocido como "conjuncción lógica", este operador devuelve verdadero (true) si ambas expresiones que se están comparando son verdaderas, de lo contrario, devuelve falso (false). Por ejemplo:

```c
int x = 5;
int y = 10;

if (x > 0 && y < 15) {
    printf("x es mayor que 0 y y es menor que 15\n");
}
```

En este caso, la expresión (x > 0 && y < 15) evaluará como verdadera solo si el valor de x es mayor que 0 y el valor de y es menor que 15.

**OR lógico (||):** También conocido como "disyunción lógica", este operador devuelve verdadero si al menos una de las expresiones que se están comparando es verdadera, de lo contrario, devuelve falso. Por ejemplo:

```c
int x = 5;
int y = 10;

if (x == 5 || y == 15) {
    printf("x es igual a 5 o y es igual a 15\n");
}
```
En este caso, la expresión (x == 5 || y == 15) evaluará como verdadera si el valor de x es igual a 5 o si el valor de y es igual a 15.

**NOT lógico (!):** También conocido como "negación lógica", este operador se utiliza para invertir el valor de verdad de una expresión. Si la expresión es verdadera, la negación lógica la convierte en falsa, y si la expresión es falsa, la convierte en verdadera. Por ejemplo:
```c
int x = 5;

if (!(x > 10)) {
    printf("x no es mayor que 10\n");
}
```
En este caso, la expresión !(x > 10) evaluará como verdadera si el valor de x no es mayor que 10.

Estos operadores lógicos se utilizan en combinación con expresiones booleanas para formar condiciones más complejas en estructuras de control como condicionales (if, else) y bucles (while, for). Son fundamentales para la construcción de expresiones lógicas en programación y se utilizan para controlar el flujo de ejecución del programa basado en condiciones lógicas.

[![Operadores-Logicos.jpg](https://i.postimg.cc/SxbC1CFv/Operadores-Logicos.jpg)](https://postimg.cc/dLnhL702)

Una forma un poco más fácil de entender a los operadores lógicos, es mediante el uso de una tabla de verdad, tal como la siguiente.

[![Tabla-Verdad-Operadores-Logicos.jpg](https://i.postimg.cc/fbTK5mYh/Tabla-Verdad-Operadores-Logicos.jpg)](https://postimg.cc/21MhSqHH)

En el lado izquierdo, tenemos los valores de **"X"** e **"Y"**
en sus respectivas columnas, a la derecha de estas dos columnas, tenemos sus valores lógicos, según el operador que se le aplique.

**El operador Coma**


El operador coma **(',')** en programación se utiliza para realizar múltiples operaciones en una sola línea de código y para especificar secuencias de expresiones. Aunque no es tan común como otros operadores, tiene varias aplicaciones útiles:

**Secuencia de expresiones:** Cuando se utiliza el operador coma entre expresiones, el resultado de la expresión completa es el resultado de la última expresión de la secuencia. Sin embargo, todas las expresiones en la secuencia se evalúan en orden, de izquierda a derecha. Esto es útil para ejecutar múltiples operaciones en una sola línea de código. Por ejemplo:

```c
int a = 5, b = 10, c;
c = (a++, b++, a + b); // Incrementa a y b, luego asigna la suma de a y b a c
```
En este ejemplo, (`a++`, `b++`, `a + b`) es una secuencia de expresiones separadas por el operador coma. Primero, `a++` incrementa `a` en 1, luego `b++` incrementa `b` en 1, y finalmente, `a + b` devuelve la suma de `a` y `b`. El valor resultante de esta expresión es la suma de `a` y `b`, que se asigna a `c`.

**Inicialización de variables:** El operador coma también se puede utilizar para inicializar varias variables en una sola línea de código. Por ejemplo:
```c
int x = 1, y = 2, z = 3;
```
En este caso, el operador coma se utiliza para separar las expresiones de inicialización de las variables `x`, `y` y `z`.

**En bucles:** A veces, el operador coma se utiliza en la parte de inicialización y actualización de bucles `for`. Por ejemplo:
```c
for (int i = 0, j = 10; i < 10; i++, j--) {
    // Cuerpo del bucle
}
```

Aquí, `i` se inicializa en `0` y `j` en `10`. Luego, `i` se incrementa en cada iteración del bucle (`i++`) mientras `j` se decrementa (`j--`).
Aunque el operador coma puede ser útil en ciertas situaciones, es importante usarlo con moderación y asegurarse de que el código siga siendo legible y comprensible. El uso excesivo del operador coma puede complicar el código y hacerlo difícil de entender para otros desarrolladores.

### Prioridad de los operadores
Por ultimo, despues de entender los diferentes tipos de operadores, debemos de aprender la jerarquia de los mismos.

Como mencionamos anteriormente en este texto, **las expresiones se evaluan de izquierda a derecha**, pero **los operadores se aplican segun su prioridad.**

- **Paréntesis:** Los paréntesis tienen la prioridad más alta y se utilizan para agrupar partes de una expresión y forzar un orden de evaluación específico.
- **Operadores de incremento/decremento:** Estos operadores (por ejemplo, `++` y `--`) tienen una prioridad alta y se evalúan antes que la mayoría de los otros operadores.
- **Operadores aritméticos:** Los operadores aritméticos, como la multiplicación (`*`), división (`/`), suma (`+`) y resta (`-`), tienen prioridad después de los operadores de incremento/decremento.
- **Operadores de relación:** Estos operadores, como igualdad (`==`), desigualdad (`!=`), mayor que (`>`), menor que (`<`), mayor o igual que (`>=`) y menor o igual que (`<=`), tienen prioridad después de los operadores aritméticos.
**Operadores lógicos:** Los operadores lógicos, como AND (`&&`), OR (`||`) y NOT (`!`), tienen prioridad después de los operadores de relación.
**Operador de asignación:** El operador de asignación (`=`) tiene una prioridad baja y se evalúa después de la mayoría de los otros operadores.

Una vez aclarados los conceptos basicos y escenciales para cualquier lenguaje de programacion, pasemos a la practica para comenzar a aprender a programar en C.

## Funciones

El concepto de reducción de problemas es fundamental para abordar problemas complejos o de gran tamaño en la programación. Este enfoque descompone el problema en subproblemas más manejables, que a su vez pueden descomponerse en subsubproblemas, hasta que el problema original se reduce a un conjunto de actividades básicas. La solución de cada una de estas actividades básicas, aplicando razonamiento hacia atrás, permite resolver el problema final.

En el contexto del lenguaje de programación C, la solución de un problema se expresa mediante un programa, mientras que la solución de un subproblema se logra mediante una función. El uso de funciones tiene numerosas ventajas, como facilitar la lectura y escritura de programas, permitir el trabajo en paralelo, asignar responsabilidades de manera eficiente, reutilizar código al escribir una función una vez y usarla múltiples veces, y facilitar el mantenimiento del programa.

Por lo tanto, un programa en C está compuesto por un programa principal y un conjunto de funciones. El programa principal consta generalmente de pocas líneas y puede llamar a funciones. Cuando se llama a una función, el procesador continúa con el procesamiento de esa función y, una vez concluida, regresa al punto de partida en el programa principal. Las funciones se escriben de manera similar al programa principal, pero con diferencias principalmente en el encabezado. Una función resuelve un subproblema de forma independiente y se ejecuta solo cuando recibe una llamada desde el programa principal o desde otras funciones. Además, C permite que una función pueda incorporar llamadas a otras funciones.

La comunicación entre las funciones y el programa principal, así como entre las propias funciones, se realiza mediante parámetros por valor, parámetros por referencia y variables globales. Aunque las variables globales son menos utilizadas por razones de eficiencia y seguridad en la escritura de programas.

### Variables locales, globales y estaticas.

Las variables en C pueden clasificarse en tres tipos principales: locales, globales y estáticas. Cada tipo tiene diferentes alcances y duraciones durante la ejecución del programa.

#### Variables Locales

- **Alcance:** Limitado al bloque en el que se declaran.
- **Duración:** Existencia solo durante la ejecución de ese bloque.
- **Inicialización:** No se inicializan automáticamente; su valor es indeterminado hasta que se les asigna explícitamente.
- **Uso típico:** Se utilizan para almacenar valores temporales o intermedios dentro de una función.

Ejemplo:

```c
#include <stdio.h>

void miFuncion() {
    int local = 10;
    printf("Variable local: %d\n", local);
}

int main() {
    miFuncion();
    // printf("%d\n", local); // Error: 'local' no está definido en este ámbito
    return 0;
}
```

#### Variables Globales

- **Alcance:** Disponible en todo el programa después de su declaración.
- **Duración:** Existencia durante toda la ejecución del programa.
- **Inicialización:** Si no se les asigna un valor, se inicializan automáticamente a 0.
- **Uso típico:** Se utilizan para almacenar valores que necesitan ser accesibles desde múltiples funciones o partes del programa.

Ejemplo:

```c
#include <stdio.h>

int global = 20;

void miFuncion() {
    printf("Variable global: %d\n", global);
}

int main() {
    miFuncion();
    printf("Variable global: %d\n", global);
    return 0;
}
```

#### Variables Estaticas

- **Alcance:** Pueden tener alcance local o global.
- **Duración:** Su duración es durante toda la ejecución del programa.
- **Inicialización:** Si no se inicializan explícitamente, se inicializan automáticamente a 0.
- **Uso típico:** Se utilizan para almacenar valores que necesitan persistir entre diferentes llamadas a una función.

Ejemplo:

```c
#include <stdio.h>

void miFuncion() {
    static int estatica = 30;
    estatica++;
    printf("Variable estática: %d\n", estatica);
}

int main() {
    miFuncion(); // Imprime: Variable estática: 31
    miFuncion(); // Imprime: Variable estática: 32
    return 0;
}
```

Para resumir: 
- Las variables locales están limitadas al ámbito de una función. 
- Las variables globales son accesibles desde cualquier parte del programa.
- Las variables estáticas tienen una duración prolongada y conservan su valor entre diferentes llamadas a una función.

## Arreglos

Un arreglo es una estructura de datos que permite almacenar una colección de elementos del mismo tipo de manera organizada y secuencial en memoria. Los arreglos son utilizados cuando se necesita trabajar con múltiples valores del mismo tipo de forma eficiente.

### **Características Principales**

- **Contigüidad en Memoria**: Los elementos de un arreglo están almacenados en ubicaciones de memoria adyacentes. Esto permite el acceso rápido a cualquier elemento del arreglo mediante el cálculo de su dirección a partir de un índice.

- **Tipo Homogéneo**: Todos los elementos en un arreglo deben ser del mismo tipo de dato. Esto permite operaciones uniformes sobre los elementos del arreglo y facilita la gestión de memoria.

- **Índices**: Cada elemento en un arreglo se identifica mediante un índice. En la mayoría de los lenguajes de programación, el índice comienza en 0. Por ejemplo, en un arreglo de tamaño n, los índices válidos son de `0` a `n - 1`.

- **Dimensiones**:

  - Unidimensionales (Vectores): Son los arreglos más simples y consisten en una sola fila de elementos.
  - Multidimensionales: Incluyen matrices (2D), cubos (3D) y arreglos de más dimensiones. Se usan en aplicaciones complejas como gráficos, simulaciones científicas y procesamiento de imágenes.

- **Tamaño Fijo**: En muchos lenguajes, los arreglos tienen un tamaño fijo definido en el momento de su declaración y no pueden cambiar de tamaño durante la ejecución del programa. Sin embargo, algunos lenguajes o bibliotecas proporcionan arreglos dinámicos que pueden cambiar de tamaño según sea necesario.

### **Ventajas de los Arreglos**
- **Acceso Rápido**: Gracias a la contigüidad en memoria, el acceso a cualquier elemento del arreglo es muy rápido, generalmente de tiempo constante O(1). Esto se debe a que la dirección de cualquier elemento puede calcularse directamente mediante su índice.

- **Simplicidad**: Los arreglos son simples de declarar y utilizar. Son una de las primeras estructuras de datos que se aprenden debido a su simplicidad y eficiencia.

- **Facilidad para Iterar**: Los bucles pueden utilizarse fácilmente para iterar a través de los elementos de un arreglo, permitiendo operaciones rápidas y eficientes sobre todos los elementos.

### **Desventajas de los Arreglos**

- **Tamaño Fijo**: Una vez que se declara el tamaño de un arreglo, no puede cambiar. Esto puede llevar a la reserva de más memoria de la necesaria (desperdicio de memoria) o a la insuficiencia de memoria si el tamaño del arreglo es menor al requerido.

- **Tipo Homogéneo**: Los arreglos sólo pueden almacenar elementos de un mismo tipo. Esto limita su flexibilidad cuando se necesita almacenar diferentes tipos de datos juntos.

- **Operaciones de Inserción y Eliminación**: Insertar o eliminar elementos en un arreglo puede ser costoso en términos de tiempo, ya que puede requerir mover muchos elementos para mantener la secuencia.

### **Aplicaciones Comunes de los Arreglos**

- **Almacenamiento de Datos**: Los arreglos se utilizan para almacenar colecciones de datos, como listas de números, nombres, o cualquier tipo de información homogénea.

- **Tablas y Matrices**: En matemáticas y ciencias de la computación, los arreglos bidimensionales (matrices) son fundamentales para representar tablas de datos, gráficos, y realizar operaciones algebraicas.

- **Buffering**: En aplicaciones multimedia, los arreglos se utilizan para implementar buffers que almacenan datos temporales antes de ser procesados.

- **Algoritmos de Ordenamiento y Búsqueda**: Muchos algoritmos de ordenamiento (como el quicksort y mergesort) y algoritmos de búsqueda (como la búsqueda binaria) se implementan usando arreglos debido a su acceso rápido y eficiente.

- **Modelado de Datos Complejos**: Los arreglos multidimensionales se utilizan para modelar datos complejos como imágenes (2D), videos (3D), y simulaciones científicas.

### **Gestión de Memoria en Arreglos**
En lenguajes de bajo nivel como C y C++, la gestión de memoria para los arreglos es un aspecto crucial. El programador debe declarar el tamaño del arreglo y asegurarse de no acceder fuera de los límites del arreglo para evitar errores de segmentación y corrupción de datos.

En lenguajes de alto nivel como Python y Java, la gestión de memoria es más abstracta. Los arreglos pueden ser redimensionados dinámicamente (en Python, usando listas) y la gestión de memoria es manejada automáticamente por el recolector de basura del lenguaje.

## Caracteres y Cadenas de Caracteres.

Los datos que una computadora puede procesar se clasifican en simples y estructurados. Esta clasificación se origina en el número de celdas o casillas de memoria que se necesitan para almacenar un dato. Los datos simples tienen la particularidad de ocupar una sola casilla de memoria. Los enteros, los reales y los caracteres son ejemplos de tipos de datos simples. Por otra parte, los datos estructurados ocupan un grupo de casillas de memoria. Un dato estructurado tiene varios componentes, que pueden ser tipos de datos simples, o bien, estructurados. Los componentes del nivel más bajo de un tipo estructurado son siempre tipos de datos simples. Los arreglos, los registros y las cadenas de caracteres son ejemplos de tipos de datos estructurados.

### **Datos Simples**
Los datos simples son aquellos que ocupan una sola casilla de memoria. Pueden ser manipulados directamente por la CPU y son los bloques de construcción básicos para tipos de datos más complejos. Entre los datos simples más comunes encontramos:

- **Enteros (Integer)**: Representan números sin decimales. Pueden ser positivos, negativos o cero. En muchos lenguajes de programación, los enteros se pueden clasificar en varios tipos según su tamaño y signo (por ejemplo, `int`, `short`, `long`).

- **Reales (Floating-Point Numbers)**: Representan números con decimales. Estos números se almacenan en una forma que permite representar una amplia gama de valores, incluidos números muy grandes y muy pequeños. Los tipos de datos reales comunes incluyen `float` y `double`.

- **Caracteres (Character)**: Representan símbolos individuales como letras, dígitos o signos de puntuación. Los caracteres generalmente se almacenan en una sola celda de memoria utilizando un conjunto de caracteres estándar como ASCII o Unicode.

### **Datos Estructurados**
Los datos estructurados son aquellos que ocupan múltiples casillas de memoria y están formados por una colección de datos simples o, en algunos casos, otros datos estructurados. Estos datos permiten almacenar y gestionar conjuntos de información más complejos. Ejemplos de datos estructurados incluyen:

- **Arreglos (Arrays)**: Son colecciones de elementos del mismo tipo, almacenados en posiciones de memoria contiguas. Los elementos de un arreglo se acceden mediante índices. Los arreglos pueden ser unidimensionales (vectores) o multidimensionales (matrices).

- **Registros (Records o Structs)**: Son colecciones de datos que pueden ser de diferentes tipos. Cada elemento de un registro se llama campo y se accede mediante un identificador. Los registros se utilizan para agrupar datos relacionados bajo un solo nombre.

- **Cadenas de Caracteres (Strings)**: Son secuencias de caracteres almacenadas en memoria contigua. A diferencia de los caracteres individuales, las cadenas de caracteres permiten manejar texto y otros datos simbólicos. Dependiendo del lenguaje de programación, las cadenas pueden ser de longitud fija o variable.

### **Importancia de los Datos Simples y Estructurados**
Modularidad y Organización: Utilizar datos estructurados permite organizar mejor los datos, facilitando la modularidad y la claridad en la programación. Por ejemplo, un registro puede representar un estudiante con campos para nombre, edad y calificaciones.

- **Eficiencia**: Los arreglos permiten el acceso eficiente y rápido a los elementos mediante índices, lo que es crucial en aplicaciones que requieren operaciones rápidas sobre grandes conjuntos de datos.

- **Flexibilidad**: Las cadenas de caracteres permiten la manipulación de texto, lo que es fundamental en aplicaciones que manejan datos de usuario, procesamiento de texto y generación de informes.

- **Abstracción**: Los datos estructurados permiten crear abstracciones más cercanas a los problemas del mundo real, facilitando la modelación de estructuras complejas como listas, árboles y gráficos.

### **Gestión de Memoria**
La gestión de memoria es un aspecto crucial tanto para datos simples como estructurados:

- **Datos Simples**: La gestión es más directa, ya que cada dato ocupa una única celda de memoria. La CPU puede acceder directamente a estos datos sin mucha sobrecarga.

- **Datos Estructurados**: Requieren una gestión más sofisticada, especialmente en lenguajes que permiten la asignación dinámica de memoria. Por ejemplo, las cadenas de caracteres en lenguajes como C deben ser manejadas con cuidado para evitar errores como desbordamientos de buffer y fugas de memoria.

## Estructuras
Las estructuras, conocidas generalmente con el nombre de registros, representan un tipo de datos estructurado. Se utilizan tanto para resolver problemas que involucran tipos de datos estructurados, heterogéneos, como para almacenar información en archivos. Las estructuras tienen varios componentes, cada uno de los cuales puede constituir a su vez un tipo de datos simple o estructurado. Sin embargo, los componentes del nivel más bajo de un tipo estructurado, siempre son tipos de datos simples. Formalmente definimos a una estructura de la siguiente manera:

> “Una estructura es una colección de elementos finita y heterogénea.”

Finita porque se puede determinar el número de componentes y heterogénea porque todos los elementos pueden ser de tipos de datos diferentes. Cada componente de la estructura se denomina campo y se identifica con un nombre único. Los campos de una estructura pueden ser de tipos de datos diferentes como ya hemos mencionado, simples o estructurados; por lo tanto, también podrían ser nuevamente una estructura. Para hacer referencia a un campo de una estructura siempre debemos utilizar tanto el nombre de la variable tipo estructura como el nombre del campo.

[![24-05-2024-0002.jpg](https://i.postimg.cc/PqnmhBnj/24-05-2024-0002.jpg)](https://postimg.cc/75XCntLs)

<br>

## Programas y Diagramas de Flujo para entender el lenguaje C

#### Introduccion a los fundamentos de C
- [Mi primer 'Hola mundo'](holaMundo/holaMundo.md)
- [Caracteres de Control](caracteresDeControl/caracteresDeControl.md)
- [Formato de Variables](formatoDeVariables/formatoDeVariables.md)
- [Lectura de datos 1](lecturaDeDatos/lecturaDeDatos.md)
- [Lectura de datos 2](lecturaDeDatos2/lecturaDeDatos2.md)
- [Procesamiento de datos](procesamientoDeDatos/procesamientoDeDatos.md)
- [Lbreria Math.h](libreriaMath/libreriaMath.md)

#### Estructuras selectivas en C
- [Condicional **if**](if/if.md)
- [Condicional doble **if-else**](if-else/if-else.md)
- [Condicional multiple **switch**](switch/switch.md)
  ##### Operadores Ternarios
  - [Operadores Ternarios](operadoresTernarios/ternarios.md)

### Estructuras algorítmicas repetitivas
- [Estructura Algoritmica Repetitiva `for`](for/for.md)
- [Estructura Algoritmica Repetitiva `while`](while/while.md)
- [Estructura Algoritmica Repetitiva `do while`](do-while/do-while.md)

### Funciones en C
  - [Sintaxis Basica de una Funcion](funcionesBasicas/funcion.md)
  - [Sintaxis Basica de una Funcion con Prototipo de la Funcion](funcionesBasicasConPrototipo/funcion.md)
  - [Conflictos en nombres de las variables](conflictoVariables/conflicto.md)
  - [Pase de parametros de una funcion por valor](parametrosValor/valor.md)
  - [Pase de parametros de una funcion por referencia](parametrosReferencia/referencia.md)
### Arreglos
  - [Arreglos Unidimensionales](arreglosUnidimensionales/arreglos.md)
  - [Apuntadores y Arreglos](apuntadoresArreglos/apuntadoresArreglos.md)
  - [Paso de Arreglos a Funciones usando Apuntadores](arreglosFunciones/arreglosFunciones.md)
  - [Areglos Bidimencionales](arreglosBidimencionales/arreglosBidimencionales.md)
  - [Uso de Punteros con Arreglos Bidimensionales](usoPunterosConArreglosBidimensionales/usoPunterosConArreglosBidimensionales.md)
  - [Arreglos Multidimencionales](arreglosMultidimencionales/arreglosMultidimecionales.md)

### Caracteres y Cadenas de Caracteres
  - [Caracteres](caracteres/caracteres.md)
  - [ctype.h](ctype/ctype.md)
  - [stdlib.h](stdlib/stdlib.md)
  - [string.h](string/string.md)

### Estructuras
- [Estructuras de datos](estructurasDeDatos/estructuras.md)
- [Alias en Estructuras de datos](./estructurasDeDatosAlias/alias.md)
- [Estructuras de datos Anidadas](./estructurasDeDatosAnidadas/estructuras.md)
- [Estructuras de datos con Arreglos](./estructurasDeDatosArreglos/estructurasArreglos.md)
- [Uniones](uniones/uniones.md)

### Archivos de Datos
- [Archivos de datos](./archivosDeTexto/archivosDeTexto.md)
