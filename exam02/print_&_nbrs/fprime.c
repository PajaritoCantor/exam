/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:06:53 by juan              #+#    #+#             */
/*   Updated: 2025/07/14 19:19:04 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 2;
        int n = atoi(av[1]);
        
        if (n == 1)
            printf("1");
        
        while (n >= i)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n == i)
                    break ;
                printf("*");
                n /= i;
                i = 1;
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}