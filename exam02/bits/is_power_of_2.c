/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:32:15 by juan              #+#    #+#             */
/*   Updated: 2025/06/27 02:16:02 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Escribe una función que determine si el numero dado es una potencia de 2.
Esta función retorna 1 si el número dado es una potencia de dos,
de lo contrario retorna 0.

int	is_power_of_2(unsigned int n);
*/

#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    return ((n & (n - 1)) == 0);
}
int main (int ac, char **av)
{
    if (ac == 2)
    {
        unsigned int n = is_power_of_2(atoi(av[1]));
        printf("%d\n", n);
    }
    return 0;
}