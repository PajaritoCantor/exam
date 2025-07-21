/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 02:53:02 by juan              #+#    #+#             */
/*   Updated: 2025/07/19 20:10:17 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Nombre de la tarea : first_word
Ficheros esperados : first_word.c
Funciones permitidas : write

Escribe un programa que tome una cadena
y muestre su primera palabra seguida de una nueva línea.

Una palabra es una sección de la cadena delimitada por espacios /
tablillas o por el inicio / fin de la cadena.

Si el número de parámetros no es 1, o si no hay palabras,
simplemente muestra una nueva línea.

Ejemplos :
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat
	-e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    
    if (ac == 2)
    {
        while (av[1][i] == 9 || av[1][i] == 32)
            i++;
        while (av[1][i] && (av[1][i] != 9 && av[1][i] != 32))
            write (1, &av[1][i++], 1); 
    }
    write (1, "\n", 1);
    return 0;
}