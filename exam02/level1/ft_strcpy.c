/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:24:51 by jurodrig          #+#    #+#             */
/*   Updated: 2024/10/24 23:10:10 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    size_t  i;

    i = 0;
    if (!s1 && !s2)
        return (NULL);
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(int ag, char *av[])
{
    
    char *dst;
    
    if (ag != 3)
    {
        printf("Uso %s <dst> <src>\n", av[0]);
        return (1);
    }
    dst = malloc(sizeof(char) * (strlen(av[2]) + 1));
    if (!dst)
    {
        printf("Memory Error.\n");
        return (1);
    }
    ft_strcpy(dst, av[2]);
    printf("Cadena copiada: %s\n", dst);
    free(dst);
}

    
