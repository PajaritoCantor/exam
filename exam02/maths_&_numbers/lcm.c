/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:35:11 by juan              #+#    #+#             */
/*   Updated: 2025/07/13 19:42:33 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if ( a == 0 || b == 0)
        return 0;
    if (a > 2147483647 || b > 2147483647)
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