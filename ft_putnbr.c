/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:14:35 by ycharhil          #+#    #+#             */
/*   Updated: 2025/01/30 10:39:57 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	print_nb(long nb)
{
	size_t	count;

	count = 0;
	if (nb / 10)
		count += print_nb(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}

size_t	ft_putnbr(const int n)
{
	long	nb;
	size_t	count;

	nb = n;
	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		count += ft_putchar('-');
	}
	count += print_nb(nb);
	return (count);
}
