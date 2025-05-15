/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:16:11 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/02 14:18:59 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src && dst < src + len)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>

int main(void)
{
	char source[] = "drink a coffee";
	char dest[] = "ink a coffee also";
	size_t n = 8;

	printf("Before ft_memmove: %s\n", dest);
	ft_memmove(dest + 2, dest, n); //overlapping
	printf("After ft_memmove : %s\n", dest);
}
*/
