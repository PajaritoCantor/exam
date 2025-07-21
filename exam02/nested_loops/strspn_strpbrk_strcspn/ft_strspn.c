/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:04:34 by jurodrig          #+#    #+#             */
/*   Updated: 2025/06/16 10:44:03 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

La función strspn() calcula la longitud (en bytes) del segmento inicial de s, 
que consta únicamente de bytes de accept.

La función strspn() devuelve el número de bytes del segmento inicial de s, 
que consta únicamente de bytes de accept.
*/

#include <stdio.h>

size_t  strspn(const char *s, const char *accept)
{
    const char *p = s;

    while (*s)
    {
        const char *a = accept;
        while (*a)
        {
            if (*p == *a)
                break ;
            a++;
        }
        if (!*a)
            break ;
        p++;
    }
    return (p - s);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        size_t s = strspn(av[1], av[2]);
        printf("%zu\n", s);
    }
    return 0;
}