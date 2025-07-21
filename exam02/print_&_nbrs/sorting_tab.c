/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:18:39 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 08:29:49 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: sort_int_tab
Archivos esperados: sort_int_tab.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escriba la siguiente función:

void sort_int_tab(int *tab, unsigned int size);

Debe ordenar (in situ) el array de enteros 'tab', 
que contiene exactamente los miembros 'size', 
en orden ascendente.

Se deben conservar los dobles.

La entrada siempre es coherente.
*/

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            int temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0; 
        }
        else
            i++;
    }
}

int main()
{
	int tab[] = {5, 2, 9, 1, 5, 6};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);
    unsigned int i = 0;

	sort_int_tab(tab, size);

	while (i < size)
	{
		printf("%d ", tab[i]);
        if (++i == size)
            printf("\n");
	}
	return 0;
}