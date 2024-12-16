/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:27:35 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/16 19:31:01 by jurodrig         ###   ########.fr       */
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