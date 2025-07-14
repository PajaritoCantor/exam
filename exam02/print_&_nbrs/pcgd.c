/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pcgd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:27:09 by juan              #+#    #+#             */
/*   Updated: 2025/07/03 15:56:11 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: pgcd
Archivos esperados: pgcd.c
Funciones permitidas: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escriba un programa que tome dos cadenas que representen dos enteros estrictamente positivos que quepan en un entero.

Muestre su máximo común denominador seguido de un salto de línea (siempre es un entero estrictamente positivo).

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

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        
        while (n2)
        {
            int tmp = n2;
            n2 = n1 % n2;
            n1 = tmp;   
        }
        printf ("%d", n1);
    }
    printf("\n");
    return 0;
}