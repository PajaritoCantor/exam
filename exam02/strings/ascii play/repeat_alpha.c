/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 03:28:29 by juan              #+#    #+#             */
/*   Updated: 2025/06/07 03:59:58 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escribe un programa llamado repeat_alpha que tome una cadena y la muestre
repitiendo cada carácter alfabético tantas veces como su índice alfabético,
seguido de una nueva línea.

'a' se convierte en 'a', 'b' en 'bb', 'e' en 'eeeee', etc...

Case no cambia.

Si el número de argumentos no es 1, sólo muestra una nueva línea.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int count = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 97 && av[1][i] <= 122)
                count = av[1][i] - 97 + 1;
            else if (av[1][i] >= 65 && av[1][i] <= 90)
                count = av[1][i] - 65 + 1;
            else
                count = 1;
            while (count--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}