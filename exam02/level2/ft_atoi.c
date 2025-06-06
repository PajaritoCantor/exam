/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:25:58 by jurodrig          #+#    #+#             */
/*   Updated: 2024/12/10 16:17:22 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == 32 || (*str == 9 && *str == 13))
		str++;
	if (*str == 45)
		sign = -1;
	if (*str == 45 || *str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
		result = result * 10 + *str++ - 48;
	return (sign * result);
}

int	main(int ag, char **av)
{
	if (ag == 2)
		printf("%d\n", ft_atoi(av[1]));
	return (0);
}