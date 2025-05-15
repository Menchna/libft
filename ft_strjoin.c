/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:00:33 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:53:16 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_strlen_safe(char const *s)
{
	if (s == NULL)
		return (0);
	return (ft_strlen(s));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	len1 = ft_strlen_safe(s1);
	len2 = ft_strlen_safe(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	while (i < len1 && s1 != NULL)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2 && s2 != NULL)
	{
		result[i++] = s2[j++];
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	char const *str1 = "Hello";
	char const *str2 = " World";
	char *joined = ft_strjoin(str1, str2);

	printf("%s\n", joined);
}
*/
