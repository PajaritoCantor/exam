/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 23:52:33 by juan              #+#    #+#             */
/*   Updated: 2025/06/26 01:17:59 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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