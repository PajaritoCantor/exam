/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:50:13 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/12 16:18:22 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	size_t	length;
	char	temp;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (length--)
	{
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}
int	main(void)
{
	char str[] = "hola";

	ft_strrev(str);
	printf("%s\n", str);
}