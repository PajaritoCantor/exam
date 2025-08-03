/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:35:11 by juan              #+#    #+#             */
/*   Updated: 2025/08/03 19:35:42 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de la asignación: mcm
Archivos esperados: lcm.c
Funciones permitidas:
--------------------------------------------------------------------------------
Escribe una función que tome dos enteros sin signo como parámetros 
y devuelva el mcm calculado de esos parámetros.

El mcm (mínimo común múltiplo) de dos enteros 
distintos de cero es el menor entero positivo divisible por ambos.

Un mcm se puede calcular de dos maneras:

- Puedes calcular todos los múltiplos de cada entero 
hasta obtener un múltiplo común distinto de 0.

- Puedes usar el mcd (máximo común divisor) de estos dos enteros 
y calcularlo de la siguiente manera:

mcm(x, y) = | x * y | / mcd(x, y)

| x * y | Significa "Valor absoluto del producto de x por y".

Si al menos un entero es nulo, el mcm es igual a 0.

Su función debe prototiparse de la siguiente manera:

unsigned int mcm(unsigned int a, unsigned int b);
*/

#include <stdlib.h>
#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;
    
    if (a > 2147483647 || b >  2147483647)
        return 0;
    
    unsigned int x = a;
    unsigned int y = b;
    
    while (y)
    {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return (a / x) * b;
}
int main (int ac, char **av)
{
    unsigned int a = atoi(av[1]);
    unsigned int b = atoi(av[2]);

    if (ac == 3)
    {
        unsigned int result = (lcm(a, b));
        printf("%d\n", result);   
    }
    return 0;
}