/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:43:16 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 11:01:07 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función que determine si el numero dado es una potencia de 2.
Esta función retorna 1 si el número dado es una potencia de dos,
de lo contrario retorna 0.

int	is_power_of_2(unsigned int n);
*/

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}