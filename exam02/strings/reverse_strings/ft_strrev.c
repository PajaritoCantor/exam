/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:30:16 by jurodrig          #+#    #+#             */
/*   Updated: 2025/07/21 13:26:49 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que invierta (in situ) una cadena.
Debe devolver su parámetro.
Su función debe declararse de la siguiente manera:

char *ft_strrev(char *str);
*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
    char    *start = str;
    char    *end = start;
    
    while (*end)
        end++;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return (str);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        char *str = ft_strrev(av[1]);
        printf("%s\n", str);
        return 0;
    }
}