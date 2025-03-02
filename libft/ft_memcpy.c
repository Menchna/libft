/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:15:18 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:49:39 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>

int main(void)
{
	const char *source = "Hello Armennn";
	size_t n = 5;
	char *dest = (char *)malloc(n + 1);

	ft_memcpy(dest, source, n);
	dest[n] = '\0';

	printf("%s\n", dest);
	free(dest);
}
*/
