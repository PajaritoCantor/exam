/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:46:46 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 15:06:32 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escriba una función que tome un byte,
y lo imprima en binario SIN UNA NUEVA LÍNEA

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char bit[8] = {
    ((octet & 0b1000000) >> 7) + 48,
    ((octet & 0b0100000) >> 6) + 48,
    ((octt & )
    };
}
/*
int	main(void)
{
	unsigned char	octet;

	octet = 156;
	print_bits(octet);
	write(1, "\n", 1);
	return (0);
}
*/