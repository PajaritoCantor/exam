/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 02:23:02 by juan              #+#    #+#             */
/*   Updated: 2025/06/12 04:03:48 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char *dup;
    char *start;
    int len = 0;
    
    while (src[len])
        len++;
    dup = malloc(len + 1);
    if (!dup)
        return NULL;
    start = dup;
    while (*src)
        *dup++ = *src++;
    *dup = '\0';
    return (start);
}

int main ()
{
    char *src = "hola";

    char *dup = ft_strdup(src);
    printf("%s", dup);
    return 0;
}