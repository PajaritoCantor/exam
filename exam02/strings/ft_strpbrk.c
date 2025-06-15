/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:38:15 by jurodrig          #+#    #+#             */
/*   Updated: 2025/06/15 00:19:52 by jurodrig         ###   ########.fr       */
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
    return (NULL);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        const char *str = strpbrk(av[1], av[2]);
        printf("%c\n", *str);
        return 0;
    }

}