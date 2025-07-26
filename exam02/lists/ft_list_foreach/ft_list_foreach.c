/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:51:21 by juan              #+#    #+#             */
/*   Updated: 2025/07/22 11:09:27 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_list_foreach
Archivos esperados: ft_list_foreach.c, ft_list.h
Funciones permitidas:
--------------------------------------------------------------------------------

Escriba una función que tome una lista y un puntero a función 
como parámetros, 
y que aplique la función a cada elemento de la lista.

Su prototipo debe ser el siguiente:

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

La función a la que apunta f se utilizará de la siguiente manera:

(*f)(list_ptr->data);

Debe usar la siguiente estructura 
y renderizarla en un archivo ft_list.h:

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
*/


#include "ft_list_foreach.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}