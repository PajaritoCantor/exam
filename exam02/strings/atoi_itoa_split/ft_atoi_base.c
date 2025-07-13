/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:32:08 by juan              #+#    #+#             */
<<<<<<< HEAD:exam02/strings/atoi_itoa_split/ft_atoi_base.c
/*   Updated: 2025/07/03 08:30:34 by juan             ###   ########.fr       */
=======
/*   Updated: 2025/07/02 17:24:11 by jurodrig         ###   ########.fr       */
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6:exam02/strings/atoi/ft_atoi_base.c
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
    int sign = 1;
<<<<<<< HEAD:exam02/strings/atoi_itoa_split/ft_atoi_base.c
    char digit;
=======
    int result;
    int digit;
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6:exam02/strings/atoi/ft_atoi_base.c

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
<<<<<<< HEAD:exam02/strings/atoi_itoa_split/ft_atoi_base.c
            digit = *str - 48 + 10;
        else if (*str >= 97 && *str <= 122)
            digit = *str - 48 + 10;
=======
            digit = *str - 65 + 10;
        else if (*str >= 97 && *str <= 122)
            digit = *str - 65 + 10;
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6:exam02/strings/atoi/ft_atoi_base.c
        else
            break ;
    
        if (digit >= str_base)
            break ;
<<<<<<< HEAD:exam02/strings/atoi_itoa_split/ft_atoi_base.c
        
=======

    while (*str)
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6:exam02/strings/atoi/ft_atoi_base.c
        result = result * str_base + digit;
    }
    return (result * sign);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
<<<<<<< HEAD:exam02/strings/atoi_itoa_split/ft_atoi_base.c
    int result = ft_atoi_base(av[1], atoi(av[2]));
    printf("%d\n", result);
=======
        int result = ft_atoi_base(av[1],atoi(av[2]));

        printf("%d\n", result);
>>>>>>> 4e2e2b58486711bcaa6f9993dfef52ac1d9394f6:exam02/strings/atoi/ft_atoi_base.c
    }
    return (0);
}