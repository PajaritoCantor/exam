/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:46:31 by juan              #+#    #+#             */
/*   Updated: 2025/06/12 02:21:11 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    if (*str == 32 || (*str == 9 || *str == 13))
        str++;
    if (*str == 45)
          sign = -1;
    if (*str == 45 || *str == 43)
        str++;
    while (*str >= 48 && *str <= 57)
        result = result * 10 + *str++ - 48;
    return (sign * result);              
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        printf("%d\n", ft_atoi(av[1]));
        printf("%d\n", atoi(av[1])); 
        return 0;
    }
}