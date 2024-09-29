/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 03:11:32 by jurodrig          #+#    #+#             */
/*   Updated: 2024/09/29 03:23:33 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Escriba una función que muestre una cadena en la salida estándar.

El puntero pasado a la función contiene la dirección del primer carácter de la cadena.
de la cadena.

Su función debe declararse como sigue

void ft_putstr(char *str);
*/

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i++], 1);
    }
}

int main(void)
{
    ft_putstr("Hello World!\n");
    return (0);
}