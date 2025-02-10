/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:39:16 by ycharhil          #+#    #+#             */
/*   Updated: 2025/02/07 16:34:07 by ycharhil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_putchar(char c);
size_t	ft_strlen(const char *c);
size_t	ft_putstr(const char *c);
size_t	ft_putadress(void *str);
size_t	ft_puthexa_lower(unsigned int n);
size_t	ft_putnbr(const int n);
size_t	ft_putunbr(unsigned int n);
size_t	ft_puthexa_upper(unsigned int n);

int		ft_printf(const char *str, ...);

#endif