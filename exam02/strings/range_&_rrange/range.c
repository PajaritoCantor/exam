/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:42:50 by juan              #+#    #+#             */
/*   Updated: 2025/06/24 06:46:27 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_range
Archivos esperados: ft_range.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int *ft_range(int start, int end);

Debe asignar (con malloc()) un array de enteros, 
llenarlo con valores consecutivos que comiencen en start y terminen en end 
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

int *ft_range(int start, int end)
{

    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }

    int len = (end - start) + 1;
    int *arr = malloc(sizeof(int) * len);
    if (!arr)
        return NULL;
    int *ptr = arr;
    while (start <= end)
    {
        *ptr = start;
        ptr++;
        start++;
    }
    return (arr);
}

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end); // Declaración previa

int main(void)
{
    int start = 3;
    int end = 7;
    int len;
    int i = 0;
    int *arr;

    if (start > end)
        len = start - end + 1;
    else
        len = end - start + 1;
    arr = ft_range(start, end);
    while (i < len)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    free (arr);
    return 0;
}
