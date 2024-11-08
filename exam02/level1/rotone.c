/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:10:16 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/07 21:34:54 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome una cadena y la muestre,
	sustituyendo cada una de sus
letras por la siguiente en orden alfabético.
'z' se convierte en 'a' y 'Z' en 'A'. Las mayúsculas y minúsculas no se ven afectadas.
La salida irá seguida de un \n.
Si el número de argumentos no es 1, el programa muestra \n.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s >= 'Y'))
			ft_putchar(*s + 1);
		else if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		++s;
	}
}

int	main(char ag, int **av)
{
	if (ag == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}