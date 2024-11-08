/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:24:02 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/07 23:49:10 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa llamado buscar_y_reemplazar que tome 3 argumentos,
	el primer argumento es una cadena en la que reemplazar una letra (2º argumento) por otra (3º argumento).

Si el número de argumentos no es 3, sólo muestra una nueva línea.

Si el segundo argumento no está contenido en el primero (la cadena)
entonces el programa simplemente reescribe la cadena seguida de una nueva línea.
*/
int	main(int ag, char **av)
{
	int i;

	i = 0;

	if (ag == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}