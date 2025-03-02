/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:20:26 by armkhach          #+#    #+#             */
/*   Updated: 2025/02/26 17:20:31 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*meme;
	size_t	i;

	i = 0;
	meme = ptr;
	while (i < num)
	{
		meme[i] = (unsigned char)value;
		i++;
	}
	return (meme);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello";
	ft_memset(str, 104, 4);

	for (int i = 0; i < 5; i++)
		printf("%c ", str[i]);
	printf("\n");
	memset(str, 104, 4);

	for (int i = 0; i < 5; i++)
		printf("%c ", str[i]);
	printf("\n");
	return (0);
}
*/
