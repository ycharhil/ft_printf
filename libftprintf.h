/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:42:06 by ycharhil          #+#    #+#             */
/*   Updated: 2024/12/16 22:15:52 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_putchar(const char *str);
size_t	ft_strlen(const char *c);
size_t	ft_putstr(const char *c);
size_t	ft_putadress(void *adress);
size_t	ft_puthexa_lower(const unsigned int n);
size_t	ft_putnbr(const int n);
size_t	ft_putunbr(const unsigned int n);
size_t	ft_puthexa_upper(const unsigned int n);

int		ft_printf(const char *str, ...);

#endif