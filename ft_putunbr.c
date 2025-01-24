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

static size_t print_unsigned(unsigned int n)
{
	if (n / 10)
		print_unsigned(n / 10);
	return (ft_putchar((n % 10 + '0')));
}

size_t	ft_putunbr(unsigned int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	return (print_unsigned(n));
}
