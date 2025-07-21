/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:36:16 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 11:35:42 by juan             ###   ########.fr       */
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

int max(int *tab, unsigned int len)
{
    if (len == 0)
        return 0;

    int *end = tab + len;
    int max = *tab;

    while (tab < end)
    {
        if (*tab > max)
            max = *tab;
        tab++;
    }
    return (max);
}

int main ()
{
    int tab [] = {5,2,9,3,5,6};
    int len = 6;

    printf ("%d\n", max(tab, len));
    return 0;
}