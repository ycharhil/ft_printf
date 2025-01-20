/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:14:07 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 21:14:10 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	printadress(const unsigned long n)
{
	char	c;

	if (n / 16)
		return (printadress(n / 16) + printadress(n % 16));
	else if (n < 10)
	{
		c = (char)(n + '0');
		ft_putchar(&c);
	}
	else
	{
		c = (char)(n - 10 + 'a');
		ft_putchar(&c);
	}
	return (1);
}

size_t	ft_putadress(void *adress)
{
	if (!adress)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (2 + printadress((unsigned long) adress));
}
