/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:09:19 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:44:28 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	num;

	num = 0;
	minus = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (minus * num);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("4193 with text"));

	printf("%d\n", ft_atoi("   +007"));

	printf("%d\n", ft_atoi("   -2147483648"));

	printf("%d\n", ft_atoi("   -1234"));

	printf("%d\n", ft_atoi("   12345"));
}
*/
