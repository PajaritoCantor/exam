/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:09:25 by jurodrig          #+#    #+#             */
/*   Updated: 2025/06/12 19:26:21 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NOMBRE
strpbrk - Busca cualquier byte de un conjunto de bytes en una cadena

SINOPSIS
#include <string.h>

char *strpbrk(const char *s, const char *accept);

DESCRIPCIÓN
La función strpbrk() localiza la primera ocurrencia en la cadena s de cualquiera de los bytes de la cadena accept.

VALOR DE RETORNO
La función strpbrk() devuelve un puntero al byte en s que coincide con uno de los bytes de accept, o NULL si no se encuentra dicho byte.
*/

#include <unistd.h>
#include <stdio.h>

char    *strpbrk(const char *s, const char *accept)
{
    while (*s)
    {
        const char *temp = accept;
        while (*temp)
        {
            if (*s == *temp)
                return (char *)s;
        temp++;
        }
        s++;
    }
    return NULL;
}

=======
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 04:06:58 by juan              #+#    #+#             */
/*   Updated: 2025/06/12 04:43:35 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        const char *temp = s2;
        while (*temp)
        {
            if (*s1 == *temp)
                return (char *)s1;
            temp++;
        }
        s1++;
    }
    return NULL;
}
>>>>>>> e3a9fb7e76002ec72cf1bdc255a76f4524a8e6b4
int main (int ac, char **av)
{
    if (ac == 3)
    {
<<<<<<< HEAD
        const char *str = strpbrk(av[1], av[2]);
        printf("%c\n", *str);
        return 0;
    }
=======
        char *res = ft_strpbrk(av[1], av[2]);
            printf("%c\n", *res);
    }
    return 0;
>>>>>>> e3a9fb7e76002ec72cf1bdc255a76f4524a8e6b4
}