/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 01:42:44 by juan              #+#    #+#             */
/*   Updated: 2025/06/17 09:21:00 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"

*/

#include <unistd.h>

void    print_bits(unsigned char octet)
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

int main ()
{
    unsigned char bits = 156;
    
    print_bits(bits);
}