/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 04:58:33 by juan              #+#    #+#             */
/*   Updated: 2025/06/12 02:20:50 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    { 
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
int main (int ac, char **av)
{
    if (ac == 3)
        printf("%d\n", ft_strncmp(av[1], av[2]));
    return 0;
}