/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:18:40 by juan              #+#    #+#             */
/*   Updated: 2025/07/13 23:18:44 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(const char *str)
{
    int result = 0;

    while (*str >= 48 && *str <= 57)
        result = result * 10 + *str++ - 48;
    return (result);
}
int is_prime(int n)
{
    int i = 2;

    if (n < 2)
        return 0;
    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}
void    putnbr(int n)
{
    char str[] = "0123456789";

    if (n > 9)
        putnbr(n / 10);
    write(1, &str[n % 10], 1);
}

int main (int ac, char **av)
{
    int i = 2;
    int sum = 0;
    int n;
    
    if (ac == 2)
    {
        n = ft_atoi(av[1]);
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
        putnbr(sum);
    }
    else
        putnbr(0);
    write(1, "\n", 1);
    return 0;
}