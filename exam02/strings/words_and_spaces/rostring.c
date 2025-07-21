/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:19:03 by juan              #+#    #+#             */
/*   Updated: 2025/07/19 20:37:01 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: rostring
Archivos esperados: rostring.c
Funciones permitidas: write, malloc, free
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena y la muestre después de rotarla una palabra a la izquierda.

De esta manera, la primera palabra se convierte en la última y las demás permanecen en el mismo orden.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabuladores o por el inicio/fin de la cadena.

Las palabras se separarán solo por un espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.

Ejemplo:

$>./rostring "abc " | cat -e
abc$
$>
$>./rostring "Que la lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring " AkjhZ zLKIJz , 23y"
zLKIJz , 23 y AkjhZ
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        int start = i;

        while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
            i++;
        int end = i;

        while (av[1][i] == 32 || av[1][i] == 9)
            i++;

        while (av[1][i])
        {
            while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
                write(1, &av[1][i++], 1);

            while (av[1][i] == 32 || av[1][i] == 9)
                i++;

            if (av[1][i])
                write(1, " ", 1);
        }    
        if (start < end)
        {
            write(1, " ", 1);
            while (start < end)
                write(1, &av[1][start++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}