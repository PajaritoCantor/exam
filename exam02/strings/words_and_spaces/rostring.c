/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:19:03 by juan              #+#    #+#             */
/*   Updated: 2025/07/17 04:21:17 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;

    if (ac > 1)
    {
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        int start = i;

        while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
            i++;
        int end = i;

        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        
        while (av[1][i])
        {
            while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
                write(1, &av[1][i++], 1);
            
            while (av[1][i] == 32 || av[i][i] == 9)
                i++;
            
            if (av[1][i])
                write(1, " ", 1);
        }
        if (start < end)
        {
            write(1, " ", 1);
            while (start < end)
                write(1, &av[1][start++], 1);
        }
        write(1, "\n", 1);
        return 0;
    }
}