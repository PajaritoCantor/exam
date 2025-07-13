/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:23:50 by juan              #+#    #+#             */
/*   Updated: 2025/07/03 17:44:16 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: str_capitalizer
Archivos esperados: str_capitalizer.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una o varias cadenas y, para cada argumento, 
escriba en mayúscula el primer carácter de cada palabra (si es una letra, obviamente), 
escriba el resto en minúsculas y muestre el resultado en la salida estándar, seguido de \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios o tabulaciones, o por el inicio o el final de la cadena. Si una palabra solo tiene una letra, debe escribirse en mayúscula.

Si no hay argumentos, el programa debe mostrar \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac > 2)
    {
        int j = 0;
        while (av[j])
        {
            int i = 0;
            while (av[j][i])
            {
                if (i == 0 || av[j][i - 1] == 32 || av[j][i] == 9)
                {
                    if (av[j][i] >= 97 && av[j][i] <= 122)
                        av[j][i] -= 32;
                }
                else if (av[j][i] >= 65 && av[j][i] <= 90)
                    av[j][i] += 32;
                write(1, &av[j][i], 1);
                i++;
            }
             if (av[j + 1])
                write(1, "\n", 1); 
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}