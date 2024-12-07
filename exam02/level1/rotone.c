/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:51:07 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/07 21:16:53 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y la muestre,
sustituyendo cada una de sus
letras por la siguiente en orden alfabético.

'z' se convierte en 'a' y 'Z' en 'A'. Las mayúsculas y minúsculas no se ven afectadas.

La salida irá seguida de un \n.

Si el número de argumentos no es 1, el programa muestra \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
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
			if ((av[1][i] >= 97 && av[1][i] <= 121) || (av[1][i] >= 65
					&& av[1][i] <= 89))
				av[1][i] += 1;
			else if (av[1][i] == 122 || av[1][i] == 90)
				av[1][i] -= 25;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}