/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:43:16 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 15:24:04 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función que determine si el numero dado es una potencia de 2.
Esta función retorna 1 si el número dado es una potencia de dos,
de lo contrario retorna 0.

int	is_power_of_2(unsigned int n);
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}
/*
int	main(int ag, char **av)
{
	int	result;

	if (ag == 2)
	{
		result = is_power_of_2(atoi(av[1]));
		printf("%u", result);
	}
}
*/