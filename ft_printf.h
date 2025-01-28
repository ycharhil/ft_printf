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