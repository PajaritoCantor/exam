/*
Nombre de la asignación: ft_range
Archivos esperados: ft_range.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int *ft_range(int start, int end);

Debe asignar (con malloc()) un array de enteros, 
llenarlo con valores consecutivos que comiencen en start 
y terminen en end 
(¡incluyendo start y end!) 
y luego devolver un puntero al primer valor del array.

Ejemplos:

- Con (1, 3) se devolverá un array que contiene 1, 2 y 3.
- Con (-1, 2) se devolverá un array que contiene -1, 0, 1 y 2.
- Con (0, 0) se devolverá un array que contiene 0.
- Con (0, -3) se devolverá un array que contiene 0, -1, -2 y -3.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
void ft_swap(int *a, int *b)
{
    if (! a || !b || a == b)
        return ;
    (*a ^= *b),(*b ^= *a),(*a ^= *b); // swap directo | sort
} 
*/

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int len = 0;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    int *range = malloc (sizeof(int) * len);
    int *ptr = range;
    if (start <= end)
        while (start <= end)
            *ptr++ = start++;
    else
        while (start >= end)
            *ptr++ = start--;
    return (range);
}

int main ()
{
    int start = 1;
    int end = 8;
    int *range = ft_range(start, end);
    int len;
    int i = 0;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;
    
    while (i < len)
        printf("%d\n", range[i++]);

    free (range);
    return 0;
}
