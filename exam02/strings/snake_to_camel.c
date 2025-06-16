/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:08:39 by juan              #+#    #+#             */
/*   Updated: 2025/06/16 18:59:40 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: snake_to_camel
Archivos esperados: snake_to_camel.c
Funciones permitidas: malloc, free, realloc, write
--------------------------------------------------------------------------------

Escriba un programa que tome una sola cadena en formato snake_case
y la convierta en una cadena en formato lowerCamelCase.

Una cadena snake_case es una cadena donde cada palabra está en minúsculas, separada por un guión bajo "_".

Una cadena lowerCamelCase es una cadena donde cada palabra comienza con mayúscula,
excepto la primera.

Ejemplos:
$>./camel_to_snake "aquí_está_una_palabra_snake_case"
aquíEsUnaPalabraCasadaSnake
$>./camel_to_snake "hola_mundo" | cat -e
holaMundo$
$>./camel_to_snake | cat -e
$
*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == 95)
            {
                i++;
                av[1][i] -= 32;
            }
            write(1, &av[1][i++], 1);
    }
    write(1, "\n", 1);
    }
}