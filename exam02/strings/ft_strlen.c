/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 00:03:11 by juan              #+#    #+#             */
/*   Updated: 2025/06/07 00:13:04 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    char *start = str;
    
    while (*str)
        str++;
    return (str - start);
}

int main()
{
    char *str = "hola";

    printf("%d\n", ft_strlen(str));
}