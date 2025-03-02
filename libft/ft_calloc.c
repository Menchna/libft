/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:17:48 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/02 14:25:14 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = (int *)malloc(count * size);
	if (!result)
		return (result);
	ft_bzero(result, count * size);
	return (result);
}

/*
#include <stdio.h>

int main(void) {
    int *arr = ft_calloc(5, sizeof(int));

    if (!arr) {
        printf("Memory allocation failed\n");
        return (1);
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    free(arr);
    return (0);
}
*/
