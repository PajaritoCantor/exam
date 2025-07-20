/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:51:21 by juan              #+#    #+#             */
/*   Updated: 2025/07/17 15:27:36 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_foreach.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list->data)
    {
        (*f)(begin_list->data); // aplico la lista a los datos
        begin_list = begin_list->next; // declaro la lista al siguiente nodo (next)
    }
}