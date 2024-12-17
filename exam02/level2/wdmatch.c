/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:31:56 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/17 14:10:01 by jurodrig         ###   ########.fr       */
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

int	main(int ag, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ag == 3)
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			i = 0;
		while (av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}