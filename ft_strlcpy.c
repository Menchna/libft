/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:16:35 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:54:16 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
	char dst[10];
	char src[] = "Hello nemraa";
	size_t len = ft_strlcpy(dst, src, sizeof(dst));

	printf("Copied string: %s\n", dst);
	printf("Needed length: %zu\n", len);
}
*/
