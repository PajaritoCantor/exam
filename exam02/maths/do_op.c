/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:40:22 by juan              #+#    #+#             */
/*   Updated: 2025/06/10 02:47:20 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que tome tres cadenas:
- La primera y la tercera son representaciones de enteros con signo de base-10
  que caben en un int.
- La segunda es un operador aritmético a elegir entre: + - * / %

El programa debe mostrar el resultado de la operación aritmética solicitada,
seguido de una nueva línea. Si el número de parámetros no es 3, el programa
sólo muestra una nueva línea.

Puede asumir que la cadena no tiene errores o caracteres extraños. Los números negativos de
en la entrada o en la salida, tendrán uno y sólo un '-' inicial. El
resultado de la operación cabe en un int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
       if (ac == 4)
       {
          if (av[2][0] == 43)
            printf("%d", atoi(av[1]) + atoi(av[3]));
       }
       printf("\n");
       return 0; 
}