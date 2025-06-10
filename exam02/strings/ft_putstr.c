/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:16:33 by juan              #+#    #+#             */
/*   Updated: 2025/06/06 20:47:53 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/

#include <unistd.h>
#include <stdio.h>


void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main ()
{
    char str [] = "string";
    
    ft_putstr(str);
    write(1, "\n", 1);
}