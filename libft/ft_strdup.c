/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:23:07 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:52:39 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdio.h>

int main(void)
{
    const char *original = "Hello, world!";
    char *duplicate;

    duplicate = ft_strdup(original);

    if (duplicate)
    {
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
}
*/
