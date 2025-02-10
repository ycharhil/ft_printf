/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:11:52 by ycharhil          #+#    #+#             */
/*   Updated: 2025/02/05 17:09:44 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	conversion(const char *c, size_t *i, va_list *ap)
{
	*i = *i + 1;
	if (*(c + 1) == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (*(c + 1) == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (*(c + 1) == 'p')
		return (ft_putadress(va_arg(*ap, void *)));
	else if (*(c + 1) == 'd' || *(c + 1) == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (*(c + 1) == 'u')
		return (ft_putunbr(va_arg(*ap, unsigned int)));
	else if (*(c + 1) == 'x')
		return (ft_puthexa_lower(va_arg(*ap, int)));
	else if (*(c + 1) == 'X')
		return (ft_puthexa_upper(va_arg(*ap, int)));
	else if (*(c + 1) == '%')
		return (ft_putchar('%'));
	else if (*(c + 1) && *(c + 2))
		return (ft_putchar((c[0])));
	else
	{
		*i -= 1;
		return (-1);
	}
}

int	ft_printf(const char *str, ...)
{
	int		len;
	size_t	i;
	va_list	ap;

	len = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += conversion(str + i++, &i, &ap);
		else
			len += write(1, &str[i++], 1);
	}
	va_end(ap);
	return (len);
}
