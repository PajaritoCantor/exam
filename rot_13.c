/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:11:44 by jurodrig          #+#    #+#             */
/*   Updated: 2024/09/18 19:46:15 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Escriba un programa que reciba una cadena y la muestre, 
* reemplazando cada una de sus letras por la letra 13 espacios por delante en orden alfabético
*
* z se convierte en m y Z. Las mayúsculas y minúsculas no se ven afectadas.
*
* La salida irá seguida de una nueva línea
*
* Si el número de argumentos no es 1, el programa muestra una nueva línea.
*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i]<= 'm') || (av[1][i] >= 'A' && av[1][i]<= 'M'))
				av[1][i] = av[1][i] + 13;
			else if ((av[1][i] >= 'n' && av[1][i]<= 'z') || (av[1][i] >= 'N' && av[1][i] >= 'Z'))
				av[1][i] = av[1][i] - 13;
			write(1, &av[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
}

