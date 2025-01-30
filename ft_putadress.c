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

static size_t	print_hex(unsigned int n)
{
	char	hex_digit;

	if (n >= 16)
		print_hex(n / 16);
	if (n % 16 < 10)
		hex_digit = (n % 16) + '0';
	else
		hex_digit = (n % 16) - 10 + 'a';
	return (ft_putchar(hex_digit));
}

size_t	ft_putadress(void *str)
{
	unsigned long	address;

	address = (unsigned long)str;
	ft_putchar('0');
	ft_putchar('x');
	if (address == 0)
		return (ft_putchar('0'));
	return (print_hex(address));
}
