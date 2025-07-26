/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:38:41 by juan              #+#    #+#             */
/*   Updated: 2025/07/22 11:07:28 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre del ejercicio: ft_list_size
Archivos esperados : ft_list_size.c, ft_list.h
Funciones permitidas: ninguna

Escribe una función que devuelva el número de elementos en la lista enlazada
que se le pasa como argumento.

Debe estar declarada así:

int	ft_list_size(t_list *begin_list);

Debes usar la siguiente estructura (guardada en un archivo llamado ft_list.h):

typedef struct    s_list
{
    struct s_list *next;  // puntero al siguiente nodo
    void          *data;  // contenido del nodo
}                 t_list;
*/


#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    if (!begin_list)
        return 0;
    return (1 + ft_list_size(begin_list->next));
}  
 
t_list  *create_node(void *data)
{
    t_list  *node = malloc(sizeof(t_list));

    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return (node);
}
int main (int ac, char **av)
{
    t_list *head = NULL;
    t_list *current = NULL;
    int i = 1;

    if (ac >= 2)
    {
        while (i < ac)
        {
            t_list *new_node = create_node(av[i]);

            if (!head)
            {
                head = new_node;
                current = new_node;
            }
            else
            {
                current->next = new_node;
                current = new_node;
            }
            i++;
        }
        printf("%d\n", ft_list_size(head));
    }
    
    t_list  *tmp;
    while(head)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
    return 0;
}
