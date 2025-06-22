/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 20:53:24 by juan              #+#    #+#             */
/*   Updated: 2025/06/22 02:20:39 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010
*/

#include <stdlib.h>
#include <unistd.h>

unsigned char   print_bits(unsigned char octet)
{
    unsigned char bit [8] = {
        ((octet & 0b10000000) >> 7) + 48,
        ((octet & 0b01000000) >> 6) + 48,
        ((octet & 0b00100000) >> 5) + 48,
        ((octet & 0b00010000) >> 4) + 48,
        ((octet & 0b00001000) >> 3) + 48,
        ((octet & 0b00000100) >> 2) + 48,
        ((octet & 0b00000010) >> 1) + 48,
        ((octet & 0b00000001) >> 0) + 48,
    };
    write(1, bit, 8);
    return (octet);
}


unsigned char reverse_bits(unsigned char octet)
{
    return  ((octet & 0b00000001) << 7) |
            ((octet & 0b00000010) << 5) |
            ((octet & 0b00000100) << 3) |
            ((octet & 0b00001000) << 1) |
            ((octet & 0b00010000) >> 1) |
            ((octet & 0b00100000) >> 3) |
            ((octet & 0b01000000) >> 5) |
            ((octet & 0b10000000) >> 7);
}
int main (int ac, char **av)
{
    if (ac == 2)
    {
        unsigned char octet = (unsigned char)atoi(av[1]);
        unsigned char reversed = reverse_bits(octet);
        print_bits(reversed);
    }
    return 0;
}