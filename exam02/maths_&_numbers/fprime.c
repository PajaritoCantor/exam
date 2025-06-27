/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:06:53 by juan              #+#    #+#             */
/*   Updated: 2025/06/27 17:27:14 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 1;
        int number = atoi(av[1]);

        if (number == 1)
            printf("1");

        while (number >= ++i)
        {
            if (number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break ;
                printf("*");
                number /= i;
                i = 1;

            }
        }
    }
}