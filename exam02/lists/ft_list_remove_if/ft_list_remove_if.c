/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 01:19:17 by juan              #+#    #+#             */
/*   Updated: 2025/07/22 14:47:34 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_list_remove_if
Archivos esperados: ft_list_remove_if.c
Funciones permitidas: gratuitas
--------------------------------------------------------------------------------

Escriba una función llamada ft_list_remove_if 
que elimine de la lista pasada cualquier elemento 
cuyos datos sean iguales a los datos de referencia.

Se declarará de la siguiente manera:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

Debe usar el archivo ft_list.h, que contendrá:

$>cat ft_list.h
typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
$>
*/

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return ;

    t_list *aux = *begin_list;

    if (cmp(aux->data, data_ref) == 0)
    {
        *begin_list = aux->next;
        free(aux->data);
        free(aux);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(&aux->next, data_ref, cmp);
}

t_list *create_node(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

int cmp(void *a, void *b)
{
    return strcmp((char *)a, (char *)b);
}

void print_list(t_list *head)
{
    while (head)
    {
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = create_node(strdup("hola"));
    list->next = create_node(strdup("mundo"));
    list->next->next = create_node(strdup("hola"));

    printf("Antes:\n");
    print_list(list);

    ft_list_remove_if(&list, "hola", cmp);

    printf("Después:\n");
    print_list(list);

    while (list)
    {
        t_list *tmp = list;
        list = list->next;
        free(tmp->data);
        free(tmp);
    }
    return 0;
}