**EJERCICIO 2.1.2**



*1. ¿Por qué n sigue siendo 10 en main?*



cuando llamas incrementar(n), se crea una copia del valor de n (que es 10) y se guarda en  x,  una variable completamente distinta. Todo lo que hagas con x dentro de la función (como x = x + 1) modificara es solo esa copia, nunca la variable original n de main. Cuando incrementar termina, x se destruye, y n en main nunca fue tocada 

2\. ¿Cómo se resolvería sin usar punteros?



La única forma de "devolver" un cambio sin usar punteros es que la función retorne el nuevo valor, y que quien la llama reasigne esa variable con el resultado



"n= incrementar(n)"



**EJERCICIO 2.1.3**



1\. Predecir la salida de cada uno.

&#x20; En Programa A 

&#x20; salida: 1

&#x20;         1

&#x20;         1

&#x20;         0



esto por que al llamar primero a la función inicializa la variable "contador=0" y la aumenta en uno, es por esto que ns bota 1, luego al llamar nueva mente a la función, se vuelve a inicializar la variable. En el printf devuelve 0 por que una ves q acaba la función , ahí muere el contador de esa función y toma el contador global , definido inicialmente.



&#x20; En Programa B

&#x20; salida: "global contador = 3"



por que esta ves a comparación de la anterior, no esta definida una variable contador dentro de la función por lo que esta función modifica al contador inicial.



4\. Discusión: ¿Por qué las variables globales son una mala

práctica en Ingeniería de Software? Mencionar al menos

tres razones 



* acoplamiento:cualquier función del programa puede leer y modificar una variable global.



* dificultad de testeo:para probar una función de forma aislada, necesitas poder controlar exactamente sus entradas y verificar sus salidas.



* condiciones de carrera en concurrencia:si dos partes del programa se ejecutan en paralelo  y ambas modifican la misma variable global al mismo tiempo, el resultado final puede depender del orden exacto de ejecución, generando bugs.



**EJERCICIO 2.2.1**



1\. ¿Qué contiene el .h y qué no debe contener?



Contiene prototipos de funciones, definiciones de constantes (#define), declaraciones de tipos (struct, enum, typedef), y las guardas de inclusión (#ifndef/#define/#endif).



No contiene la implementación de las funciones normales, ni definiciones de variables (solo declaraciones extern)



2\. ¿Por qué el .h no debe tener definiciones de funciones

(salvo static inline en casos avanzados)?



Porque un .h puede ser incluido por varios archivos .c distintos dentro del mismo proyecto. Si el .h tuviera el cuerpo completo por asi decirlo de una función normal, cada archivo .c que lo incluya generaría su propia copia compilada de esa función, y al momento de enlazar  todos los .o en un solo ejecutable, se encontraría múltiples definiciones del mismo símbolo. 



La excepción "static inline" existe porque ese calificador le dice al compilador que, si la función se copia a varios archivos, cada copia es local a ese archivo (static) y candidata a insertarse directamente en el código llamador (inline).



3\. ¿Para qué sirven #ifndef/#define/#endif? ¿Qué pasa al incluir el mismo .h dos veces?



son las guardas de inclusión, que evitan que el contenido del .h se procese más de una vez en la misma unidad de compilación.



&#x20;si en main.c escribes #include "raiz\_digital.h" dos veces, el preprocesador pegaría el contenido completo del .h dos veces en el archivo resultante — y como ese .h (en este caso) solo tiene prototipos (no definiciones), probablemente compilaría igual sin error, porque declarar un prototipo varias veces de forma idéntica es válido en C. 



4\. ¿Por qué main.c solo necesita incluir raiz\_digital.h y no raiz\_digital.c?



Porque lo único que main.c necesita saber para poder llamar a suma\_digitos, raiz\_digital e imprimir\_traza es lo qué reciben, qué devuelven, eso es exactamente lo que provee el .h.



























