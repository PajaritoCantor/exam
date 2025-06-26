/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:42:49 by juan              #+#    #+#             */
/*   Updated: 2025/06/26 16:19:16 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escriba un programa que tome una o más cadenas y, 
para cada argumento, escriba el último carácter
(una letra de cada palabra) 
en mayúsculas y el resto en minúsculas. 
Luego, muestre el resultado seguido de un \n.

Una palabra es una sección de cadena delimitada 
por espacios/tabuladores o por el inicio/final 
de la cadena. Si una palabra tiene una sola letra, 
debe escribirse en mayúscula.

Una letra es un carácter del conjunto [a-zA-Z]

Si no hay parámetros, muestre \n.

Ejemplos:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
*/

#include <unistd.h>
int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if ((av[1][i] >= 65 && av[1][i] <= 90))
                av[1][i] += 32;
            if ((av[1][i] >= 97 && av[1][i] <= 122) && (!av[1][i + 1] || av[1][i + 1] == 32 || av[1][i + 1] == 9))
                av[1][i] -= 32;
            write(1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}