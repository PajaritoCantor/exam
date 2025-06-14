/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 04:06:58 by juan              #+#    #+#             */
/*   Updated: 2025/06/12 04:43:35 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        const char *temp = s2;
        while (*temp)
        {
            if (*s1 == *temp)
                return (char *)s1;
            temp++;
        }
        s1++;
    }
    return NULL;
}
int main (int ac, char **av)
{
    if (ac == 3)
    {
        char *res = ft_strpbrk(av[1], av[2]);
            printf("%c\n", *res);
    }
    return 0;
}