/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:14:46 by juan              #+#    #+#             */
/*   Updated: 2025/07/19 05:30:30 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: rev_wstr
Archivos esperados: rev_wstr.c
Funciones permitidas: write, malloc, free
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena como parámetro e imprima sus palabras en orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios y/o tabulaciones, o el principio/final de la cadena.

Si el número de parámetros es diferente de 1, el programa mostrará '\n'.

En los parámetros que se van a probar, no habrá espacios adicionales (es decir, no habrá espacios adicionales al principio ni al final de la cadena, y las palabras siempre estarán separadas por exactamente un espacio).

Ejemplos:

$> ./rev_wstr "¡Odias a la gente! Pero a mí me encantan las reuniones. ¿No es irónico?" | cat -e
¿irónico? No son reuniones. ¡Amo! ¡Pero gente! ¡Te odio!
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int flag = 0;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;

        while (i >= 0)
        {
            while (av[1][i] == 32 || av[1][i] == 9)
                i--;
            int end = i;

            while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
                i--;
            int start = i + 1;

            if (flag)
                write(1, " ", 1);

            while (start <= end)
                write(1, &av[1][start++], 1);

            flag = 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}