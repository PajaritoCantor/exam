/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:16:08 by juan              #+#    #+#             */
/*   Updated: 2025/07/01 17:55:18 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: epur_str
Archivos esperados: epur_str.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena 
y la muestre con solo tres espacios entre palabras, 
sin espacios ni tabulaciones al principio ni al final, 
seguido de un \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabulaciones o por el inicio/final de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el programa muestra un \n.

Ejemplo:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int aux = 0;

        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        while (av[1][i])
        {
            if (av[1][i] == 32 || av[1][i] == 9)
                aux = 1;
            if (!(av[1][i] == 32 || av[1][i] == 9))
            {
                if (aux)
                    write(1, " ", 1);
                aux = 0;
                    write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}