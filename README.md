# Exams

## Exam Rank 02
## Exam Rank 03
### Filter

    3         if (!ac == 2)
    4                 return (printf("ERROR args"), 1);
    5         char    *word = av[1];
    6         int     len_word = strlen(word);
    7         char    *input = malloc(1);
    8         int     buffer_size = 1024;
    9         char    *buffer = malloc(buffer_size);

* En **word** se guarda el argumento que contiene la **palabra a buscar**.
* En **len_word** se calcula y guarda la longitud de la palabra. Luego se usará para comparar, reemplazar y avanzar en el texto.
* En **char** ***input = malloc(1)** se reserva **1 byte** para iniciar el buffer donde se almacenará toda la entrada estándar.
  - Esto permite tener un puntero válido que luego crecerá con **realloc**
* En **int buffer_size = 1024** se almacena el tamaño del bloque con el que se leerá del **stdin**. Se usa como tamaño de cada lectura realizada con **read()**
* En **char** ***buffer = malloc(buffer_size)** se reserva memoria para un buffer temporal donde se guardarán los datos leídos en cada llamada a **read()**. Luego ese contenido se copiará al buffer principal **input**.


