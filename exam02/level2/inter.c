/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:32:21 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 10:15:56 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome dos cadenas y muestre, sin dobles,
los caracteres que aparecen en ambas cadenas,
en el orden en que aparecen en la primera primera.

La visualización irá seguida de un \n.

Si el número de argumentos no es 2, el programa muestra \n.
Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int				i;
	int				j;
	unsigned char	seen[256] = {0};

	i = 0;
	j = 0;
	if (ag == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (!seen[(unsigned char)av[1][i]])
					{
						write(1, &av[1][i], 1);
						seen[(unsigned char)av[1][i]] = 1;
					}
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
