/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:19:49 by jurodrig          #+#    #+#             */
/*   Updated: 2025/12/04 04:13:37 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: broken_GNL
Archivos esperados: get_next_line.c get_next_line.h
Funciones permitidas: read, free, malloc
--------------------------------------------------------------------------------
Repare la función 'get_next_line' en el archivo get_next_line.c, 
cuyo prototipo debería ser: char *get_next_line(int fd);

Es posible que también necesite reparar otras funciones.
Descripción de la función 'get_next_line':

Su función debe devolver:
Una línea leída del descriptor de archivo pasado como parámetro.

Una 'línea leída' se define como: 
Una sucesión de 0 a n caracteres que termina en '\n' (código ASCII 0x0a) 
o en 'Fin de Archivo' (EOF).

La línea debe devolverse incluyendo '\n' si hay uno al final de la línea leída.

Al llegar al EOF, debe almacenar el búfer actual en un char * y devolverlo. 
Si el búfer está vacío: debe devolver NULL.
En caso de error: devuelva NULL.

Si no devuelve NULL: el puntero debe ser liberable.
Su programa se compilará con el indicador -D BUFFER_SIZE=xx, 
que debe usarse como tamaño del búfer 
para las llamadas de lectura en sus funciones.

Su función debe estar libre de fugas de memoria.

Al llegar al EOF, 
su función no debe mantener memoria asignada con malloc, excepto la línea devuelta.

Llamar a la función get_next_line en un bucle le permitirá 
leer el texto disponible en un descriptor de archivo, 
línea por línea, hasta el final del texto, 
independientemente del tamaño del texto o de cualquiera de sus líneas.

Asegúrese de que su función se comporte correctamente al leer desde un archivo, 
desde la salida estándar, desde una redirección, etc.

No se realizará ninguna llamada 
a otra función en el descriptor de archivo entre dos llamadas a get_next_line.

Por último, 
consideramos que get_next_line tiene un comportamiento indefinido 
al leer desde un archivo binario.

--------------------------------------------------------------------------------
*/

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


char	*ft_strdup(const char *str)
{
	char *alloc = malloc(sizeof(char) * strlen(str) + 1);
	if (!alloc)
		return NULL;
	char *ptr = alloc;
       	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (alloc);

}

char	*get_next_line(int fd)
{
	char static	buffer[BUFFER_SIZE];
	char		line[70000];
	static int	b_read;
	static int	b_pos;
	int		i = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1337)
	{
		if (b_pos >= b_read)
		{
			b_read = read(fd, buffer, BUFFER_SIZE);
			b_pos = 0;
			if (b_read <= 0)
				break ;
		}
		line[i++] = buffer[b_pos++];
		if (buffer[b_pos - 1] == '\n')
			break ;
	}
	line[i] = '\0';
	if (i == 0)
		return (NULL);
	return (ft_strdup(line));
}

int main()
{
	int fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close (fd);
	return 0;
}
