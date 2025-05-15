/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:34:54 by armkhach          #+#    #+#             */
/*   Updated: 2025/02/26 17:35:25 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlen(const char *arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
	const char str[] = "helloo";
	printf("%zu", ft_strlen(str));
	return (0);
}
*/
