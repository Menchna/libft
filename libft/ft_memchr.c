/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:02:00 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:48:35 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    char *result = ft_memchr(str, 'o', 13);

    if (result != NULL)
        printf("Found : %ld\n", result - str);
}
*/
