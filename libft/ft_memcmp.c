/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:02:54 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:49:19 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hella";

	int result = ft_memcmp(str1, str2, 5);

	if (result == 0)
		printf("Strings are equal\n");
	else if (result > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is smaller than str2\n");
}
*/
