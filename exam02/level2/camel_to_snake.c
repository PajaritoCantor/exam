/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:46:57 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/10 11:29:47 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba un programa que tome una cadena en formato minúsculaCamelCase
y la convierta en una cadena en formato snake_case.

Una cadena lowerCamelCase
es una cadena en la que cada palabra empieza por mayúscula,
excepto la primera.

Una cadena snake_case es una cadena en la que cada palabra está en minúsculas,
	separadas por un guión bajo «_».

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$


*/

#include <unistd.h>

int	main(int ag, char **av)
{
	int i = 0;

	if (ag == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				av[1][i] += 32;
				write(1, "_", 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}