/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:37:46 by jurodrig          #+#    #+#             */
/*   Updated: 2024/09/29 03:00:15 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que imprima los números del 1 al 100, 
cada uno separado por una nueva línea.

Si el número es múltiplo de 3, imprime 'fizz' en su lugar.

Si el número es múltiplo de 5, imprime 'buzz' en su lugar.

Si el número es a la vez múltiplo de 3 y múltiplo de 5, 
imprime 'fizzbuzz' en su lugar.
*/

#include <unistd.h>

void ft_write_number(int n)
{
    char    str[10] = "0123456789";

    if (n > 9)
        ft_write_number(n / 10);
    write (1, &str[n % 10], 1);
}

int main(int argc, int **av)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
                write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
                write (1, "fizz", 4);
        else if (i % 5 == 0)
                write (1, "buzz", 4);
        else
                ft_write_number(i);
        i++;
        write (1, "\n", 1);
    }
}
