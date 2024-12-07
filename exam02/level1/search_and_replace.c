/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:35:01 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/07 21:16:02 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Escribe un programa llamado buscar_y_reemplazar que tome 3 argumentos, el primer
argumento es una cadena en la que hay sustituir una letra (2º argumento) por
otra (3er argumento).

Si el número de argumentos no es 3, sólo muestra una nueva línea.

Si el segundo argumento no está contenido en el primero (la cadena)
entonces el programa simplemente reescribe la cadena seguida de una nueva línea.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

1. la longitud de 3 y 4
2. Recorro el string
3. Si  a b i 
*/

int	main(int ag, char **av)
{
	int i = 0;

    if (ag == 4 && !av[2][1] && !av[2][1])
    {
        whil  
    }
}