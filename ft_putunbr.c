/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:15:14 by ycharhil          #+#    #+#             */
/*   Updated: 2025/01/30 10:39:36 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	print_unsigned(unsigned int nb)
{
	size_t	count;

	count = 0;
	if (nb / 10)
		count += print_unsigned(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}

size_t	ft_putunbr(unsigned int n)
{
	size_t			count;
	unsigned long	nb;

	count = 0;
	nb = n;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += print_unsigned(nb);
	return (count);
}
