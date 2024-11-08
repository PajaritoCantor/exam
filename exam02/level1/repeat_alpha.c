/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:31:57 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/07 23:11:31 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa llamado repetir_alfa que tome una cadena y la muestre
repitiendo cada carácter alfabético tantas veces como su índice alfabético,
seguido de una nueva línea.

'a' se convierte en 'a', 'b' en 'bb', 'e' en 'eeeee', etc...
*/
#include "unistd.h"

int	main(int ag, char **av)
{
	int i;
	int count;

	i = 0;
	if (ag == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 'a' + 1;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 'A' + 1;
			else
				count = 1;
			while (count--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}