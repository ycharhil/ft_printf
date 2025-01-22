/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:15:44 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 21:15:47 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t print_hex(unsigned int n)
{
	char	hex_digit;

	if (n /16)
		print_hex(n / 16);
	if (n % 16 < 10)
		hex_digit = (n % 16) + '0';
	else
		hex_digit = (n % 16) - 10 + 'a';
	return (ft_putchar(hex_digit));
}

size_t	ft_puthexa_lower(unsigned int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	return (ft_puthexa_lower(n));
}
