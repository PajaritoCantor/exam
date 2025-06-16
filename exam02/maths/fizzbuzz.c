/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:50:43 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/06 15:51:09 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que imprima los números del 1 al 100,
cada uno separado por una nueva línea.

Si el número es múltiplo de 3, imprime 'fizz' en su lugar.

Si el número es múltiplo de 5, imprime 'buzz' en su lugar.

Si el número es a la vez múltiplo de 3 y múltiplo de 5,
imprime 'fizzbuzz' en su lugar.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>

*/

#include <unistd.h>

void	write_nbr(int nbr)
{
	char	str[10] = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	main(void)
{
	int i = 0;
	{
		while (i <= 100)
		{
			if (i % 3 == 0)
				write(1, "fizz", 4);
			else if (i % 5 == 0)
				write(1, "buzz", 4);
			else if (i % 15 == 0)
				write(1, "fizzbuzz", 8);
			else
				write_nbr(i);
			i++;
			write(1, "\n", 1);
		}
	}
}