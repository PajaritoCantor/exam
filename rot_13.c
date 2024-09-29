/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:11:44 by jurodrig          #+#    #+#             */
/*   Updated: 2024/09/29 02:28:41 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Escriba un programa que reciba una cadena y la imprima reemplazando cada una 
* de sus letras por la letra 13 espacios adelante en orden alfabético.
* 'z' se convierte en 'm' y 'Z' en 'M'. 
* La salida irá seguida de una nueva línea.
* Si el número de argumentos no es 1, el programa muestra una nueva línea.
*/

#include <unistd.h>

int	ft_isalpha(char c)
{
	return (c >= 'a' || c <= 'm' || (c >= 'A' || c <= 'M'));
}

int	main(int argc, char **av)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (av[1][i])
		{
			if (ft_isalpha(av[1][i]))
			{
				if (av[1][i] >= 'a' && av[1][i] <= 'm' || av[1][i] >= 'A' && av[1][i] <= 'M')
				{	
					av[1][i] += 13;
				}
				else
				{
					av[1][i] -= 13; 
				}
			}
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}