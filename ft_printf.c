/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:11:52 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/18 18:09:15 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	conversion(const char *c, size_t *i, va_list *ap)
{
	*i = *i + 1;
	if (*(c + 1) == 'c')
		//return (ft_putchar(( va_arg(*ap, int), '\0')));
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
	int		tmp;
	va_list	ap;
	size_t	i;

	if (!str)
		return (-1);
	len = 0;
	va_start(ap, str);
	i = 0;
	while (str[i] && (len != -1))
	{
		if (str[i] == '%')
		{
			tmp = conversion(str + i, &i, &ap);
			i++;
		}
		else
		{
			tmp = write(1, &str[i], 1);
			i++;
		}
		if (tmp >= 0)
			len += tmp;
		else
			len = tmp;
	}
	va_end(ap);
	return (len);
}

/*
#include <stdio.h>

int main() {
    int ret_ft_printf;
    int ret_printf;
	int	x;
	int y;
	int	p;
	int	l;
    char c = 'A';
    char *str = "Hello, World!";
    int num = 12345;
    unsigned int u_num = 98765;
    unsigned int hex_num = 255;
   // printf("\nTest avec plusieurs spécificateurs de format:\n");
	ft_printf("Test avec plusieurs spécificateurs de format:\n");
    //ret_ft_printf = ft_printf("\nft_printf: %c %s %d %u %x\n", c, str, num, u_num, hex_num);
    //ret_printf = printf("printf: %c %s %d %u %x \n", c, str, num, u_num, hex_num);
    //printf("ret_ft_printf: %d, ret_printf: %d\n", ret_ft_printf, ret_printf);
	//x = ft_printf("news %c \n", c);
	//y = printf("newss %c \n", c);
	//printf("x: %d, y: %d\n", x, y);
	p = ft_printf("test1: %x \n", hex_num);
	l = printf("test2: %x \n", hex_num);
	printf("p: %d l: %d\n", p, l);
    return 0;
}
// voir le man de write
// %s correct
// %c correct
// %d correct
// %u correct
// %x correct
*/