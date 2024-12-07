/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 01:03:33 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/07 01:40:25 by jurodrig         ###   ########.fr       */
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

Output :
$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
*/

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		write(1, &str[i], 1);
	return (str);
}

int	main(void)
{
	rev_print("");
	write(1, "\n", 1);
}