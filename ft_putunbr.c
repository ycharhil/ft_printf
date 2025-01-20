/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:15:14 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 21:15:17 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putunbr(const unsigned int n)
{
	char	c;

	if (n / 10)
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	else
	{
		c = (char)(n + '0');
		return (ft_putchar(&c));
	}
}
