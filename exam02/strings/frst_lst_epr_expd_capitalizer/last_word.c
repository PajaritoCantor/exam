/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:55:22 by juan              #+#    #+#             */
/*   Updated: 2025/06/16 17:41:59 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome una string y muestre su última palabra
seguida de un \n.
Una palabra es una sección de una string delimitada por espacios/tabs o
el inicio/fin de la string.

Si el número de parámetros no es 1, o no hay palabras, muestra una nueva línea.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat
	-e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int i = 0;
	int start = 0;
	int end = 0;

	if (ag == 2)
	{
        while (av[1][i])
            i++;
        while (av[1][i] == '\0' || av[1][i] == 32 || av[1][i] == 9)
            i--;
        end = i;
        while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
            i--;
        start = i + 1;
        while (start <= end)
            write(1, &av[1][start++], 1); 
    }
    write(1, "\n", 1);
    return 0;
}