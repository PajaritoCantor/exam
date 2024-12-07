/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 01:43:23 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/07 13:49:21 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Escribe un programa que tome una cadena y la muestre,
sustituyendo cada una de sus letras por la letra 13 espacios
por delante en orden alfabético.
'z' se convierte en 'm' y 'Z' en 'M'.
Las mayúsculas y minúsculas no se ven afectadas.
La salida irá seguida de una nueva línea.
Si el número de argumentos no es 1, el programa muestra una nueva línea.

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>

*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int	i;

	i = 0;
	if (ag == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 97 && av[1][i] <= 122)
				av[1][i] = (av[1][i] - 97 + 13) % 26 + 97;
			else if (av[1][i] >= 65 && av[1][i] <= 99)
				av[1][i] = (av[1][i] - 65 + 13) % 26 + 65;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
