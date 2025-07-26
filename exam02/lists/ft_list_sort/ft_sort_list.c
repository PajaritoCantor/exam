/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:49:27 by juan              #+#    #+#             */
/*   Updated: 2025/07/22 15:24:23 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la tarea: sort_list
Archivos esperados: sort_list.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escriba las siguientes funciones:

t_list *sort_list(t_list* lst, int (*cmp)(int, int));

Esta función debe ordenar la lista dada como parámetro, 
utilizando el puntero de función cmp para seleccionar 
el orden a aplicar y devuelve un puntero 
al primer elemento de la lista ordenada.

Deben conservarse las duplicaciones.

Las entradas siempre serán consistentes.

Debe usar el tipo t_list descrito en el archivo list.h 
que se le proporcionó. 
Debe incluir ese archivo (#include "list.h"), 
pero no debe entregarlo. Usaremos el nuestro para compilar su tarea.

Las funciones pasadas como cmp siempre 
devolverán un valor distinto de 0 si a y b 
están en el orden correcto; 0 en caso contrario.

Por ejemplo, la siguiente función, utilizada como cmp, 
ordenará la lista en orden ascendente:

int ascending(int a, int b)
{
return (a <= b);
}
*/

#include "list.h"
#include <stdlib.h>

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list start;

    while (lst && lst->next)
    {
        if ((*cmp)lst->data, lst->data->next)
        {
            int swap = lst->data;
            lst->data = lst->data->next;
            lst->data->next = swap;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}

