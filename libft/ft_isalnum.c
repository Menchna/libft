/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:26:37 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:46:54 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int arg = 'g';
	printf("%d\n", ft_isalnum(arg));
}
*/
