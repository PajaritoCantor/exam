/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:22:27 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/12 17:30:12 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (*s)
	{
		while (accept[i] && *s != accept[i])
			i++;
		{
			if (accept[i] == 0)
				return (count);
			i++;
			count++;
			s++;
		}
	}
	return (count);
}

int	main(void)
{
	const char *s = "hello world";
	const char *accept = "aeiou";

	printf("%zu", ft_strspn(s, accept));
}