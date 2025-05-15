/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:17:03 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:53:58 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dst == NULL && dstsize == 0)
		return (0);
	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] != '\0' && j + i + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dest = malloc(18);
	dest = memset(dest, 'r', 15);
	dest[15] = '\0';

	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	printf("%s\n", dest);
}
*/
