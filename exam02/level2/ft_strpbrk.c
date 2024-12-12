/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:39:18 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/12 12:48:45 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (*s1)
	{
		while (s2[i])
		{
			if (s1[i] == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s1 = "hello world";
	const char	*s2 = "aeiou";
	char		*result;

	result = ft_strpbrk(s1, s2);
	printf("Primera coincidencia: %c en la posición: %ld\n", *result, result
		- s1);
}
*/