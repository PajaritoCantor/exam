/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 01:27:11 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 11:22:39 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: paramsum
Archivos esperados: paramsum.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que muestre 
el número de argumentos pasados, 
seguido de un salto de línea.

Si no hay argumentos, 
simplemente muestra un 0 
seguido de un salto de línea.

Ejemplo:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/

#include <unistd.h>

void    putnbr(int n)
{
    char str [] = "0123456789";

    if (n > 9)
        putnbr(n / 10);
    write(1, &str[n % 10], 1);
}

int main (int ac, char **av)
{
    (void)av;
    putnbr(ac - 1);
    write(1, "\n", 1);
    return 0;
}