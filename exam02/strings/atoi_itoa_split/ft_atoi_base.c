/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:32:08 by juan              #+#    #+#             */
/*   Updated: 2025/07/03 08:30:34 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_atoi_base
Archivos esperados: ft_atoi_base.c
Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escriba una función que convierta el argumento de cadena str (base N <= 16) 
en un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef. 
Estos caracteres deben, por supuesto, recortarse según la base solicitada. 
Por ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

Las letras mayúsculas también deben reconocerse: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') solo se interpretan si son el primer carácter de la cadena.

Su función debe declararse de la siguiente manera:

int ft_atoi_base(const char *str, int str_base);
*/

#include <stdlib.h>
#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    char digit;

    if (*str == 45)
    {
        sign = -1;
        sign++;
    }

    while (*str)
    {
        if (*str >= 48 && *str <= 57)
            digit = *str - 48;
        else if (*str >= 65 && *str <= 90)
            digit = *str - 48 + 10;
        else if (*str >= 97 && *str <= 122)
            digit = *str - 48 + 10;
        else
            break ;

        if (digit >= str_base)
            break ;
        
        result = result * str_base + digit;
        str++;
    }
    return (result * sign);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
    int result = ft_atoi_base(av[1], atoi(av[2]));
    printf("%d\n", result);
    }
    return (0);
}