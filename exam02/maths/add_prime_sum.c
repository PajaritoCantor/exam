/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 00:24:33 by juan              #+#    #+#             */
/*   Updated: 2025/06/19 12:31:12 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: add_prime_sum
Archivos esperados: add_prime_sum.c
Funciones permitidas: write, exit
--------------------------------------------------------------------------------

Escriba un programa que tome un entero positivo como argumento y muestre la suma de todos los números primos inferiores o iguales a él, seguida de un salto de línea.

Si el número de argumentos no es 1, o el argumento no es un número positivo, simplemente muestre 0 seguido de un salto de línea.

Sí, los ejemplos son correctos.

Ejemplos:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

int ft_atoi(const char *str)
{
    int result = 0;

    while (*str >= 48 && *str <= 57)
        result = result * 10 + *str++ - 48;
    return (result);
}
void    ft_putnbr(int n)
{
    char    number [] = "0123456789";

    if (n >= 10)
        ft_putnbr(n / 10);
    write(1, &number[n % 10], 1);
}
int is_prime(int n)
{
    int i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int main (int ac, char **av)
{
    int i = 2;
    int sum = 0;
    int n;

    if (ac == 2)
    {
        n = ft_atoi(av[1]);
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    return 0;
}