/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:10:27 by jurodrig          #+#    #+#             */
/*   Updated: 2024/11/08 02:19:15 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escribe un programa
que tome dos cadenas que representen dos enteros
estrictamente positivos que quepan en un int.
Muestra su máximo común denominador seguido de una nueva línea
(Siempre es un entero estrictamente positivo).
*/

int	main(int ag, char **av)
{
	int	nbr1;
	int	nbr2;

	if (ag == 3)
	{
		if ((nbr1 == atoi(av[1])) > 0 && (nbr2 == atoi(av[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
