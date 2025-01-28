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

#include "ft_printf.h"

static size_t	print_hex(unsigned int n)
{
	char	hex_digit;
	size_t	count;

	count = 0;
	if (n / 16)
		count += print_hex(n / 16);
	if (n % 16 < 10)
		hex_digit = (n % 16) + '0';
	else
		hex_digit = (n % 16) - 10 + 'A';
	count += ft_putchar(hex_digit);
	return (count);
}

size_t	ft_puthexa_upper(unsigned int n)
{
	unsigned long	nb;
	size_t			count;

	count = 0;
	nb = n;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += print_hex(nb);
	return (count);
}
