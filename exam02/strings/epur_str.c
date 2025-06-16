/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:16:08 by juan              #+#    #+#             */
/*   Updated: 2025/06/16 18:16:35 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: epur_str
Archivos esperados: epur_str.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena y la muestre con solo un espacio entre palabras, sin espacios ni tabulaciones al principio ni al final, seguido de un \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabulaciones o por el inicio/final de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el programa muestra un \n.

Ejemplo:

$> ./epur_str "¿Ves? Es fácil imprimir lo mismo" | cat -e
¿Ves? Es fácil imprimir lo mismo$
$> ./epur_str " Esta vez será más complejo." | cat -e
Esta vez será más complejo. $
$> ./epur_str "No m*** Sherlock..." "nAw M*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

int main (int ac, char **av)
{
    if (ac == 2)
    {
        
    }
}