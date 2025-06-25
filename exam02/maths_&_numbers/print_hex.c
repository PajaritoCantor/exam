/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:44:21 by juan              #+#    #+#             */
/*   Updated: 2025/06/19 16:12:22 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: print_hex
Archivos esperados: print_hex.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome un número positivo (o cero) 
expresado en base 10 y lo muestre en base 16 (en minúsculas), 
seguido de un salto de línea.

Si el número de parámetros no es 1, 
el programa muestra un salto de línea.

Ejemplos:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>

int ft_atoi (char *str)
{
    int result = 0;

    while (*str)
        result = result * 10 + *str++ - 48;
    return (result);
}

void    print_hex(int n)
{
    char hex [] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);
}
int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return 0;
}