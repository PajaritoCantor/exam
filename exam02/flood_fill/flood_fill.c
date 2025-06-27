/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:29:00 by juan              #+#    #+#             */
/*   Updated: 2025/06/27 02:13:59 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: flood_fill
Archivos esperados: *.c, *.h
Funciones permitidas: -
--------------------------------------------------------------------------------

Escriba una función que tome un char ** como un array bidimensional de char, 
un t_point como las dimensiones de este array y un t_point como el punto de inicio.

A partir del t_point 'begin' dado, esta función rellena una zona completa 
reemplazando los caracteres internos con el carácter 'F'. 
Una zona es un grupo del mismo carácter delimitado horizontal 
y verticalmente por otros caracteres o por el límite del array.

La función flood_fill no rellenará diagonalmente.

El prototipo de la función flood_fill será el siguiente:
void flood_fill(char **tab, t_point size, t_point begin);

El prototipo de la estructura t_point será el siguiente:
typedef struct  s_point
  {
	int		x;
	int		y;
  }               t_point;

Example:

$> cat test.c
#include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>



$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct  s_point
  {
	int		x;
	int		y;
  }               t_point;

void	fill(char **tab, t_point size, t_point p, char org, char to_fill)
{
	if(p.y < 0 || p.y >= size.y || p.x < 0 || p.x >= size.x
	|| tab[p.y][p.x] != org || tab[p.y][p.x] == to_fill)
	return ;

	tab[p.y][p.x] = to_fill;
	fill (tab, size, (t_point){p.y - 1, p.x}, org, to_fill);
	fill (tab, size, (t_point){p.y + 1, p.x}, org, to_fill);
	fill (tab, size, (t_point){p.y, p.x - 1}, org, to_fill);
	fill (tab, size, (t_point){p.y, p.x + 1}, org, to_fill);
}
void    flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x], 'F');
}

char** make_area(char** zone, t_point size)
{
	char** new;
	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

int	main(void)
{
	t_point	size = {8, 5};
	t_point	begin = {7, 4};
 
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}