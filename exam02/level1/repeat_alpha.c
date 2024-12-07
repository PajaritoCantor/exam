/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:55:15 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/07 00:58:04 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escribe un programa llamado repeat_alpha que tome una cadena y la muestre
repitiendo cada carácter alfabético tantas veces como su índice alfabético,
seguido de una nueva línea.

'a' se convierte en 'a', 'b' en 'bb', 'e' en 'eeeee', etc...

Case no cambia.

Si el número de argumentos no es 1, sólo muestra una nueva línea.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int	i;
	int	count;

	i = 0;
	if (ag == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 97 && av[1][i] <= 122)
				count = av[1][i] - 97 + 1;
			else if (av[1][i] >= 65 && av[1][i] <= 90)
				count = av[1][i] - 65 + 1;
			else
				count = 1;
			while (count--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
