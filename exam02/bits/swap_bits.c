/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:21:48 by juan              #+#    #+#             */
/*   Updated: 2025/06/17 10:12:54 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
		\ /
		/ \
 0001 | 0100
*/

unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4) | (octet << 4);
}