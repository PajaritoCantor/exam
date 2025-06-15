/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:50:44 by jurodrig          #+#    #+#             */
/*   Updated: 2025/06/15 20:56:51 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPCIÓN

La función strcspn() calcula la longitud del segmento inicial de s, que consta únicamente de bytes que no están en reject.

VALOR DEVUELTO

La función strcspn() devuelve el número de bytes del segmento inicial de s que no están en la cadena reject.
*/

#include <stdlib.h>
#include <stdio.h>

size_t  strcspn(const char *s, const char *reject)
{
    const char *p = s;
    while (*p)
    {
        const char *r = reject;
        while(*r)
        {
           if (*p == *r)
            return (p - s);
        r++; 
        }
        p++;
    }
    return (p  - s);
    
}

int main (int ac, char **av)
{
    
    if (ac == 3)
    {
        size_t s = strcspn(av[1], av[2]);
        printf("%zu\n", s);
    }
    return (0);
}
