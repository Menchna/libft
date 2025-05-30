/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:01:13 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:58:17 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	partofstr(char s, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (s == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*result;
	int		start;
	int		end;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && partofstr(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && partofstr(s1[end], set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	while (start <= end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	char const *s1 = "helloarmenhello";
	char const *set = "hello";
	char *trimmed = ft_strtrim(s1, set);

	if (trimmed)
		printf("%s\n", trimmed);
	else
		printf("Failed Memory Allocation.\n");
}
*/
