/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:06:52 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/02 14:04:00 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	count(int num)
{
	int	counter;

	counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

static int	tens(int counter)
{
	int	ten;

	ten = 1;
	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

static int	checker(int n, int fd)
{
	n = 147483648;
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		num;
	int		ten;
	char	res;

	if (n == -2147483648)
		n = checker(n, fd);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	len = count(n);
	ten = tens(len);
	while (ten != 0)
	{
		num = n / ten;
		res = num + '0';
		ft_putchar_fd(res, fd);
		n = n - num * ten;
		ten /= 10;
	}
}

/*
int main(void)
{
	int n = -1234;
	int fd = 1;

	ft_putnbr_fd(n, fd);
}
*/
