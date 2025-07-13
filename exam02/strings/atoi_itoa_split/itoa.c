/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:12:58 by juan              #+#    #+#             */
/*   Updated: 2025/06/29 02:00:41 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    if (nbr == -2147483648)
        return ("-2147483648");
    
    int number = nbr;
    char *result;
    int len = 0;

    if (nbr < 0)
        len++;
    
    while (number)
    {
        number /= 10;
        len++;
    }

    if(!(result = malloc(len + 1)))
        return (NULL);

    result[len] = '\0';

    if (nbr == 0)
    {
        result[0] = '0';
        return result;
    }

    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }

    while (nbr)
    {
        result[--len] = nbr % 10 + 48;
        nbr /= 10;
    }
    return result;
}
int main (int ac, char **av)
{
    if (ac == 2)
    {
        int number = atoi(av[1]);
        char *result = ft_itoa(number);

        if (result)
        {
            printf("%s\n", result);
            free(result);
        }
    }
    return 0;
}