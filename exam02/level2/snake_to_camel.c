/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:45:18 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 19:23:31 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome una cadena en formato snake_case
y la convierta en una cadena en formato lowerCamelCase.

Una cadena snake_case es una cadena donde cada palabra está en minúsculas,
	separadas por un guión bajo «_».

Una cadena lowerCamelCase es una cadena
en la que cada palabra empieza por mayúscula,
excepto la primera.

Examples:
$>./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./camel_to_snake "hello_world" | cat -e
helloWorld$
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
			if (av[1][i] == 95)
			{
				i++;
				av[1][i] -= 32;
			}
			write(1, &av[1][i++], 1);
		}
	}
}