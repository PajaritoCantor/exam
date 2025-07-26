/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:45:05 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 15:20:29 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome dos cadenas
y compruebe si es posible escribir la primera cadena
con caracteres de la segunda cadena,
respetando el orden en que estos caracteres aparecen en la segunda cadena.

Si es posible, el programa muestra la cadena, seguida de un \n,
	de lo contrario simplemente muestra un \n.

Si el número de argumentos no es 2, el programa muestra un \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat
	-e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;

        while (av[2][j])
        {
            if (av[2][j] == av[1][i])
                i++;
            j++;
        }
        if (!av[1][i])
            i = 0;
        while(av[1][i])
            write(1, &av[1][i++], 1);
    }
    else
        write(1, "\n", 1);
    return 0;
}