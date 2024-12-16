/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:10:05 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 14:33:17 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe la siguiente función:

int	max(int* tab, unsigned int len);

El primer parámetro es una matriz de int,
	el segundo es el número de elementos en
la matriz.

La función devuelve el número más grande encontrado en la matriz.

Si la matriz está vacía, la función devuelve 0.
*/

#include <stdio.h>
#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
