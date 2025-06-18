/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:55:49 by juan              #+#    #+#             */
/*   Updated: 2025/06/16 12:35:42 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que tome una cadena,
y muestre la cadena al revés
seguida de una nueva línea.

La cadena original no debe modificarse.

Debe devolver la cadena pasada como parámetro.

char	*rev_print(char *str);

Examples:

int	main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}
*/

#include <unistd.h>
#include <stdio.h>

char    *rev_print(char *str)
{
    char *end = str;

    while (*end)
        end++;
    while (end != str)
        write(1, --end, 1);
        return (str);   
}
int	main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}