/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:33:20 by jurodrig          #+#    #+#             */
/*   Updated: 2025/06/07 02:48:25 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que intercambie el contenido de dos enteros
cuyas direcciones se pasan como parámetros.

*/
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("cambia %d a %d? \n", a, b);
	return (1);
}
*/