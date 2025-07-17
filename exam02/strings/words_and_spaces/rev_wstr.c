/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:14:46 by juan              #+#    #+#             */
/*   Updated: 2025/07/17 03:09:47 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int flag = 0;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;

        while (i >= 0)
        {
            while (!av[1][i] || av[1][i] == 32 || av[1][i] == 9)
                i--;
            int end = i;

            while (av[1][i] != '\0' && av[1][i] != 32 && av[1][i] != 9)
                i--;
            int start = i + 1;

            if (flag)
                write(1, " ", 1);
            
            while (start <= end)
                write(1, &av[1][start++], 1);

            flag = 1;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}