/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:32:08 by juan              #+#    #+#             */
/*   Updated: 2025/07/20 20:12:23 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_atoi_base
Archivos esperados: ft_atoi_base.c
Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escriba una función que convierta el argumento de cadena str 
(base N <= 16) en un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef. 
Estos caracteres deben, por supuesto, 
recortarse según la base solicitada. 
Por ejemplo, la base 4 reconoce "0123" 
y la base 16 reconoce "0123456789abcdef".

Las letras mayúsculas también deben reconocerse: 
"12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') solo se interpretan 
si son el primer carácter de la cadena.

Su función debe declararse de la siguiente manera:

int ft_atoi_base(const char *str, int str_base);
*/

/*
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	old_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break;

		if (digit >= str_base)
			break;

		result = result * str_base + digit;
		str++;
	}
	return (result * sign);
}
*/

int ft_value(char c)
{
    if (c >= 48 && c <= 57)
        return (c - 48);
    else if (c >= 97 && c <= 102)
        return (c - 97 + 10);
    else if (c >= 65 && c <= 70)
        return (c - 65 + 10);
    return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit = 0;

    if (*str == 45)
        sign = -1;
    if (*str == 45 || *str == 43)
        str++;
        
    while (*str)
    {
    digit = ft_value (*str);
    if (digit < 0 || digit >= str_base)
        break ;
    result = result * str_base + digit;
    str++;
    }
    return (sign * result);
}
