/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:27:51 by armkhach          #+#    #+#             */
/*   Updated: 2025/03/01 20:48:03 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
        int arg = 'a';
        printf("%d\n", ft_isprint(arg));
}
*/
