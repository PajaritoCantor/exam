/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:08:06 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/08 00:20:34 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena
e invierta las mayúsculas y minúsculas de todas sus letras.
Los demás caracteres permanecen inalterados.

Debe mostrar el resultado seguido de un '\n'.

Si el número de argumentos no es 1, el programa muestra '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat
	-e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat
	-e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
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
			if (av[1][i] >= 97 && av[1][i] <= 122)
				av[1][i] -= 32;
			else if (av[1][i] >= 65 && av[1][i] <= 90)
				av[1][i] += 32;
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}