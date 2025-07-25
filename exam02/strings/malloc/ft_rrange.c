/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:23:51 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 11:43:52 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Nombre de la asignación: ft_rrange
Archivos esperados: ft_rrange.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe la siguiente función:

int *ft_rrange(int start, int end);

Debe asignar (con malloc()) un array de enteros, 
llenarlo con valores consecutivos que comiencen en el final 
y terminen en el inicio (¡incluyendo inicio y fin!) 
y luego devolver un puntero al primer valor del array.

Ejemplos:

- Con (1, 3) devolverás un array con 3, 2 y 1
- Con (-1, 2) devolverás un array con 2, 1, 0 y -1.
- Con (0, 0) devolverás un array con 0.
- Con (0, -3) devolverás un array con -3, -2, -1 y 0.*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    if (end > start)
    {
        int tmp = start;
        start = end;
        end = tmp; 
    }
    int len = (start - end) + 1;
    int *arr;
    if(!(arr = (malloc(sizeof(int) * len))))
        return NULL;
    int *ptr = arr;
    while (start >= end)
        *ptr++ = start++;
    return (arr);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start = 4;
    int end = -4;
    int *range = ft_rrange(start, end);
    int len = start - end + 1;
    int i = 0;

    while (i < len)
    {
        printf("%d\n", range[i]);
        i++;
    }
    free(range);
    return 0;
}