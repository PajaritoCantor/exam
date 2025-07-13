/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 23:52:33 by juan              #+#    #+#             */
/*   Updated: 2025/07/03 11:54:41 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Nombre de la asignación: mcm
Archivos esperados: lcm.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escribe una función que tome dos enteros sin signo como parámetros 
y devuelva el mcm calculado de esos parámetros.

El mcm (mínimo común múltiplo) de dos enteros distintos de cero 
es el menor entero positivo divisible por ambos.

Un mcm se puede calcular de dos maneras:

- Puedes calcular todos los múltiplos de cada entero hasta obtener un múltiplo común distinto de 0.

- Puedes usar el mcd (máximo común divisor) de estos dos enteros y calcularlo de la siguiente manera:

mcm(x, y) = | x * y | / mcd(x, y)

| x * y | Significa "Valor absoluto del producto de x por y".

Si al menos un entero es nulo, el mcm es igual a 0.

Su función debe prototiparse de la siguiente manera:

unsigned int mcm(unsigned int a, unsigned int b);
*/

unsigned int	lcm(int a, unsigned int b)
{
    if (a <= 0 || b <= 0)
        return 0;
    
    unsigned int x = a;
    unsigned int y = b;
    
    while (y)
    {
        unsigned int tmp = y; 
        y = x % y; 
        x = tmp; 
    }
    return (a / x) * b;
}

int main ()
{
    printf("%u\n", lcm(48, 18));
    return 0;
}