/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:36:43 by armkhach          #+#    #+#             */
/*   Updated: 2025/02/26 19:31:11 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_bzero(void *str, size_t num)
{
	char	*string;
	size_t	i;

	string = str;
	i = 0;
	while (i < num)
	{
		string[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "hello";
	size_t num = 4;
	ft_bzero(str, num);

	for (int i = 0; i < num; i++)
		printf("%d", str[i]);
	printf("\n");
	return (0);
}
*/
