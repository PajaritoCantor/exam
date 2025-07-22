/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:27:55 by juan              #+#    #+#             */
/*   Updated: 2025/07/22 08:50:48 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: ft_split
Archivos esperados: ft_split.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escriba una función que tome una cadena, 
la divida en palabras y las devuelva 
como un array de cadenas terminado en NULL.

Una "palabra" se define como una parte 
de una cadena delimitada por espacios, 
tabulaciones, saltos de línea 
o por el inicio y el final de la cadena.

Su función debe declararse de la siguiente manera:

char **ft_split(char *str);
*/

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str)
{
    int k = 0;
    int j = 0;
    char **split = (char **)malloc(sizeof(char *) * 256);

    if (!split)
        return NULL;
    while (*str == 32 || *str == 9 || *str == 10)
        str++;
    while (*str)
    {
        j = 0;
        split[k] = (char *)malloc(sizeof(char *) * 4096);

        while (*str && *str != 32 && *str != 9 && *str != 9)
            split[k][j++] = *str++;

        split[k][j] = '\0';
        k++;

        while (*str == 32 || *str == 9 || *str == 9)
            str++;
    }
    split[k] = NULL;
    return (split);
}

int main ()
{
    char str [] = "Este es un ejemplo de split , hola h";
    int i = 0;

    char **result = ft_split(str);

    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}