/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:03:05 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/10 22:46:05 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strscpn(const char *s, const char *reject)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (*s)
	{
		while (reject[i] && *s != reject[i])
			i++;
		if (reject[i] != '\0')
			return (count);
		i = 0;
		count++;
		s++;
	}
	return (count);
}