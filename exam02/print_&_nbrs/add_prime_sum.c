/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:18:40 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 10:55:50 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: add_prime_sum
Archivos esperados: add_prime_sum.c
Funciones permitidas: write, exit
--------------------------------------------------------------------------------

Escriba un programa que tome un entero positivo como argumento 
y muestre la suma de todos los números primos inferiores 
o iguales a él, seguida de un salto de línea.

Si el número de argumentos no es 1, 
o el argumento no es un número positivo, 
simplemente muestre 0 seguido de un salto de línea.

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

void    putnbr(int n)
{
    char str [] = "0123456789";

    if (n > 9)
        putnbr(n / 10);
    write(1, &str[n % 10], 1);
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
    int sum = 0;
    int i = 2;
    
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
        putnbr(sum);
    }
    else 
        putnbr(0);
    write(1, "\n", 1);
    return 0;
}