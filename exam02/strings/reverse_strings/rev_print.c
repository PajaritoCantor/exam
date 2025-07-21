/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:55:49 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 11:41:51 by juan             ###   ########.fr       */
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
    char *len = str;

    while (*len)
        len++;
    while (len != str)
        write(1, --lenn, 1);
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