# Exams

## Exam Rank 02
## Exam Rank 03
<details>
    <summary><h2>Filter</h2></summary>

Filter es un programa cuyo objetivo es leer texto desde la entrada estándar y reemplazar todas las apariciones de una palabra dada por una secuencia de caracteres * del mismo tamaño. La palabra a buscar se recibe como argumento del programa. 

* Si no se proporciona ningún argumento, o si no se recibe entrada por **stdin**, el programa debe mostrar un error y finalizar.
* El texto procesado se muestra por la salida estándar, manteniendo intacto todo lo que no coincida con la palabra objetivo.
*  

             if (!ac == 2)
                     return (printf("ERROR args"), 1);
             char    *word = av[1];
             int     len_word = strlen(word);
             char    *input = malloc(1);
             int     buffer_size = 1024;
             char    *buffer = malloc(buffer_size);

* En **word** se guarda el argumento que contiene la **palabra a buscar**.
* En **len_word** se calcula y guarda la longitud de la palabra. Luego se usará para comparar, reemplazar y avanzar en el texto.
* En **char** ***input = malloc(1)** se reserva **1 byte** para iniciar el buffer donde se almacenará toda la entrada estándar.
  - Esto permite tener un puntero válido que luego crecerá con **realloc**
* En **int buffer_size = 1024** se almacena el tamaño del bloque con el que se leerá del **stdin**. Se usa como tamaño de cada lectura realizada con **read()**
* En **char** ***buffer = malloc(buffer_size)** se reserva memoria para un buffer temporal donde se guardarán los datos leídos en cada llamada a **read()**. Luego ese contenido se copiará al buffer principal **input**.
</details>

