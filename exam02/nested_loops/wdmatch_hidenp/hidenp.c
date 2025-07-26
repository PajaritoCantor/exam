/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 08:23:43 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 15:28:33 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: hidenp
Archivos esperados: hidenp.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa llamado hidenp que tome dos cadenas 
y muestre 1 seguido de un salto de línea 
si la primera cadena está oculta en la segunda.
De lo contrario, muestre 0 seguido de un salto de línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculto en s2 
si es posible encontrar cada carácter de s1 en s2, 
en el mismo orden en que aparecen en s1.
Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, 
el programa muestra un salto de línea.

Ejemplos:

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 3)
    {
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (!av[1][i])
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}