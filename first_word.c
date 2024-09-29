/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:24:38 by jurodrig          #+#    #+#             */
/*   Updated: 2024/09/28 22:22:25 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba un programa que tome una cadena y muestre su primera palabra, 
seguida de una nueva línea.

Una palabra es una sección de una cadena delimitada por espacios/tablillas o por el inicio/final de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra
una nueva línea.
*/

#include <unistd.h>
#include <stdio.h>

int ft_isspace(int c) 
{
    return (c == 32 || c == 9 || c == 10 || c == 13 || c == 12 || c == 11);
}

int main(int ac, char **av) 
{
    int i = 0;

    if (ac == 2) 
    {
        while (ft_isspace(av[1][i])) 
		{
            i++;
        }
        while (av[1][i] != '\0' && !ft_isspace(av[1][i])) 
		{
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}