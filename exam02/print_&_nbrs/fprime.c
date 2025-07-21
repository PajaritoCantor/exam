/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:06:53 by juan              #+#    #+#             */
/*   Updated: 2025/07/21 11:27:31 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Nombre de la asignación: fprime
Archivos esperados: fprime.c
Funciones permitidas: printf, atoi
--------------------------------------------------------------------------------

Escriba un programa que tome un entero positivo 
y muestre sus factores primos en la salida estándar, 
seguidos de un salto de línea.

Los factores deben mostrarse en orden ascendente 
y separados por '*' para que la expresión en la salida 
proporcione el resultado correcto.

Si el número de parámetros no es 1, 
simplemente muestre un salto de línea.

La entrada, si la hay, será válida.

Ejemplos:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | gato -e
9539$
$> ./fprime 804577 | gato -e
804577$
$> ./fprime 42 | gato -e
2*3*7$
$> ./fprime 1 | gato -e
1$
$> ./fprime | gato -e
$
$> ./fprime 42 21 | gato -e
$
*/

#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 2;
        int n = atoi(av[1]);

        while(n >= i)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n == i)
                    break ;
                printf("*");
                n /= i;
                i = 1;
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}