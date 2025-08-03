/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pcgd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:27:09 by juan              #+#    #+#             */
/*   Updated: 2025/08/03 19:40:41 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: pgcd
Archivos esperados: pgcd.c
Funciones permitidas: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escriba un programa que tome dos cadenas que representen dos enteros 
estrictamente positivos que quepan en un entero.

Muestre su máximo común denominador seguido de un salto de línea 
(siempre es un entero estrictamente positivo).

Si el número de parámetros no es 2, muestre un salto de línea.

Ejemplos:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
*/

#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int x = atoi(av[1]);
        int y = atoi(av[2]);

        while (y)
        {
            int tmp = y;
            y = x % y;
            x = tmp;
        }
        printf("%d", x);
    }
    printf("\n");
    return 0;
}