/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:36:03 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/08 19:25:36 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Escribe un programa llamado hidenp que tome dos cadenas y muestre 1
seguido de una nueva línea si la primera cadena está oculta en la segunda,
en caso contrario muestra 0 seguido de una nueva línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculta en s2 si es posible
encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.
Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra una nueva línea.
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
		while (av[2][j] && av[1][j])
		{
			if (av[2][j] == av[1][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}