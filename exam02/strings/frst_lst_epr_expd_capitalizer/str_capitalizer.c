/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 22:46:04 by jurodrig          #+#    #+#             */
/*   Updated: 2025/07/12 22:46:57 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac > 1)
    {
        int j = 1;
        while(av[j])
        {
            int i = 0;
            while (av[j][i])
            {
                if (av[j][i] >= 65 && av[j][i] <= 90)
                        av[j][i] += 32; 
                if ((i == 0 || av[j][i - 1] == 32 || av[j][i - 1] == 9 || av[j][i - 1] == 13))
                {
                    if (av[j][i] >= 97 && av[j][i] <= 122)
                        av[j][i] -= 32;
                }
                    write(1, &av[j][i++], 1);
            }
            write(1, "\n", 1);
            j++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;    
}