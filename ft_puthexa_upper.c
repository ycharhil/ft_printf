/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:16:20 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 21:16:24 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_puthexa_upper(const unsigned int n)
{
	char	c;

	if (n >= 16)
		return (ft_puthexa_upper(n / 16) + ft_puthexa_upper(n % 16));
	else if (n < 10)
	{
		c = (char)(n + '0');
		return (ft_putchar(&c));
	}
	else
	{
		c = (char)(n - 10 + 'A');
		return (ft_putchar(&c));
	}
}
