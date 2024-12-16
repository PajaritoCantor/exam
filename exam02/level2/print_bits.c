/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:46:46 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 15:36:36 by jurodrig         ###   ########.fr       */
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
	unsigned char bits[8] = {
		((octet & 0b10000000) >> 7) + 48,
		((octet & 0b01000000) >> 6) + 48,
		((octet & 0b00100000) >> 5) + 48,
		((octet & 0b00010000) >> 4) + 48,
		((octet & 0b00001000) >> 3) + 48,
		((octet & 0b00000100) >> 2) + 48,
		((octet & 0b00000010) >> 1) + 48,
		((octet & 0b00000001) >> 0) + 48,
	};
	write(1, bits, 8);
}
/*
int	main(void)
{
	unsigned char	octet;

	octet = 8;
	print_bits(octet);
	write(1, "\n", 1);
	return (0);
}
*/