/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:14:07 by ycharhil          #+#    #+#             */
/*   Updated: 2025/02/10 16:48:08 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	print_hex(unsigned long n)
{
	char	hex_digit;
	size_t	count;

	count = 0;
	if (n >= 16)
		count += print_hex(n / 16);
	if (n % 16 < 10)
		hex_digit = (n % 16) + '0';
	else
		hex_digit = (n % 16) - 10 + 'a';
	count += ft_putchar(hex_digit);
	if (hex_digit < 0)
		return (-1);
	return (count);
}

size_t	ft_putadress(void *str)
{
	unsigned long	address;
	size_t			count;

	count = 0;
	address = (unsigned long)str;
	if (address == 0)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putchar('0');
		count += ft_putchar('x');
		count += print_hex(address);
	}
	return (count);
}
