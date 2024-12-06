/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:37:13 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/06 12:47:02 by jurodrig         ###   ########.fr       */
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

int	main(int ag, char **av)
{
	int i = 0;

	if (ag == 2)
	{
		while (av[1][i] == 9 || av[1][i] == 32)
			i++;
		while (av[1][i] && (av[1][i] != 9 && av[1][i] != 32))
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}