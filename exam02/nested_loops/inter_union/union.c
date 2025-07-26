/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:42:47 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 13:10:47 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba un programa que tome dos cadenas y muestre, sin dobles, 
el caracteres que aparecen en cualquiera de las cadenas.

La pantalla se mostrará en el orden en que aparecen
los caracteres en la línea de comando y
irá seguido de un \n.

Si el número de argumentos no es 2, el programa muestra \n.

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    unsigned char seen [256] = {0};

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!seen[(unsigned char)av[1][i]])
            {
                write(1, &av[1][i], 1);
                seen[(unsigned char)av[1][i]] = 1;    
            }
            i++;
        }
        while (av[2][j])
        {
            if (!seen[(unsigned char)av[2][j]])
            {
                write(1, &av[2][j], 1);
                seen[(unsigned char)av[2][j]] = 1;    
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
