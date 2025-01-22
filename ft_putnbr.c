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
	if (nb / 10)
		print_nb(nb / 10);
	return (ft_putchar((char)(nb % 10 + '0')));
}

size_t	ft_putnbr(const int n)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else
		return (print_nb(nb));
}
