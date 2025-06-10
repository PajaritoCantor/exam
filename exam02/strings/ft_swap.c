/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 00:17:07 by juan              #+#    #+#             */
/*   Updated: 2025/06/07 03:27:30 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que intercambie el contenido de dos enteros
cuyas direcciones se pasan como parámetros.

void    ft_swap(int *a, int *b)
*/

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp = *a;
    
    *a = *b;
    *b = temp;
}

int main ()
{
    int a = 1;
    int b = 2;
    
    ft_swap(&a, &b);
    printf("%d %d\n", a, b);
}