/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:00:00 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/10 10:11:38 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write

Escribe un programa llamado alpha_mirror
que tome una cadena y muestre esta cadena después,
sustituyendo cada carácter alfabético por el carácter alfabético opuesto,
seguido de una nueva línea.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int i = 0;

	if (ag == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 97 && av[1][i] <= 122)
				av[1][i] = (97 + 122) - av[1][i];
			else if (av[1][i] >= 65 && av[1][i] <= 90)
				av[1][i] = (65 + 90) - av[1][i];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}