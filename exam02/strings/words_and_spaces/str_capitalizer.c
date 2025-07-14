/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2025/06/26 16:23:50 by juan              #+#    #+#             */
/*   Updated: 2025/07/03 17:44:16 by juan             ###   ########.fr       */
=======
/*   Created: 2025/07/12 22:46:04 by jurodrig          #+#    #+#             */
/*   Updated: 2025/07/12 22:46:57 by jurodrig         ###   ########.fr       */
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
<<<<<<< HEAD
    if (ac > 2)
    {
        int j = 0;
        while (av[j])
=======
    if (ac > 1)
    {
        int j = 1;
        while(av[j])
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6
        {
            int i = 0;
            while (av[j][i])
            {
<<<<<<< HEAD
                if (i == 0 || av[j][i - 1] == 32 || av[j][i] == 9)
=======
                if (av[j][i] >= 65 && av[j][i] <= 90)
                        av[j][i] += 32; 
                if ((i == 0 || av[j][i - 1] == 32 || av[j][i - 1] == 9 || av[j][i - 1] == 13))
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6
                {
                    if (av[j][i] >= 97 && av[j][i] <= 122)
                        av[j][i] -= 32;
                }
<<<<<<< HEAD
                else if (av[j][i] >= 65 && av[j][i] <= 90)
                    av[j][i] += 32;
                write(1, &av[j][i], 1);
                i++;
=======
                    write(1, &av[j][i++], 1);
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6
            }
             if (av[j + 1])
                write(1, "\n", 1); 
            j++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;    
}