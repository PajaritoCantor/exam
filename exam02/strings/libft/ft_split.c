/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:27:55 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 22:22:35 by juan             ###   ########.fr       */
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
    int j = 0;
    int k = 0;
    char **split = (char **)malloc(sizeof(char *) * 256);
    if (!split)
        return NULL;

    while (*str == 32 || *str == 9 || *str == 10)
        str++;
    while (*str)
    {
        j = 0;
        split[k] = (char *)malloc(sizeof(char) * 4096);

        while (*str && *str != 32 && *str != 9 && *str != 10)
            split[k][j++] = *str++;

        split[k][j] = '\0';
        k++;

        while (*str == 32 || *str == 9 || *str == 10)
            str++;
    }
    split[k] = NULL;
    return (split);
}

int main() {
    char str[] = "   Esto es  un    ejemplo   de   split. ";
    char **result;
    int i;

    result = ft_split(str);

    if (!result) {
        fprintf(stderr, "Error al dividir la cadena.\n");
        return (1);
    }

    i = 0;
    while (result[i]) {
        printf("Palabra %d: '%s'\n", i, result[i]);
        free(result[i]); // Libera cada palabra
        i++;
    }

    free(result); // Libera el array de punteros

    return (0);
}
