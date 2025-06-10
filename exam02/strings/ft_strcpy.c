/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:15:36 by juan              #+#    #+#             */
/*   Updated: 2025/06/06 22:57:33 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    char *dest = s2;

    while (*s1)
        *s2++ = *s1++;
    *s2 = '\0';
    return (dest);
}

/*
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s1[i])
    {    
        s2[i] = s1[i];
        i++;
    }
        s2[i] = '\0';
    return (s2);
}
*/

int main ()
{
    char src [] = "Hola";
    char dst [5];

    ft_strcpy(src, dst);
    write(1, &dst, 5);
    return 0;
}