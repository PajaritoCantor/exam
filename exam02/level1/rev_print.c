/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:58:22 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/06 17:10:02 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que tome una cadena, y muestre la cadena al revés
seguida de una nueva línea.

La cadena original no debe modificarse.

Debe devolver la cadena pasada como parámetro.
*/

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}
int	main(void)
{
	rev_print("Hello world");
	write(1, "\n", 1);
	return (0);
}