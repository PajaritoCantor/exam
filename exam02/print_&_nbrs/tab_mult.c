/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 03:26:06 by juan              #+#    #+#             */
/*   Updated: 2025/06/26 13:58:38 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: tab_mult
Archivos esperados: tab_mult.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que muestre 
la tabla de multiplicar de un número.

El parámetro siempre será un número estrictamente 
positivo que quepa en un entero, 
y dicho número multiplicado por 9 
también cabe en un entero.

Si no hay parámetros, el programa muestra \n.

Ejemplos:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/
#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int result;

    while (*str >= 48 && *str <= 57)
        result = result * 10 + *str++ - 48;
    return (result);
}
void    ft_putnbr(int n)
{
    char str [] = "0123456789";

    if (n >= 10);
        ft_putnbr(n / 10);
    write(1, &str[n % 10], 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        int i = 0;
        
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 1);
            ft_putnbr(nbr);
            write(1, " = ", 1);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}