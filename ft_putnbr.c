/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:14:35 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 21:14:42 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	print_nb(long nb)
{
	char	c;

	if (nb / 10)
		return (print_nb(nb / 10) + print_nb(nb % 10));
	else
	{
		c = (char)(nb + '0');
		return (ft_putchar(&c));
	}
}

size_t	ft_putnbr(const int n)
{
	long	nb;
	char	c;

	nb = n;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		c = '-';
		return (ft_putchar(&c) + print_nb(nb));
	}
	else
		return (print_nb(nb));
}
