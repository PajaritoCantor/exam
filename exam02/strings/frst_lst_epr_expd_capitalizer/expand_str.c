/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:36:35 by juan              #+#    #+#             */
/*   Updated: 2025/07/01 17:36:10 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/

int main (int ac, char **av)
{
    int i;
    int aux = 0;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;          
        while (av[1][i])
        {
            if (av[1][i] == 32 || av[1][i] == 9)
                aux = 1;
            if (!(av[1][i] == 32 || av[1][i] == 9))
            {
                if (aux)
                    write(1, "   ", 3);
                aux = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}