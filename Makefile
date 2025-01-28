# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycharhil <ycharhil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 17:32:13 by ycharhil          #+#    #+#              #
#    Updated: 2024/12/18 17:47:45 by ycharhil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = ft_printf.h
NAME = ft_printf.a
CC = cc
INCLUDES = -I.
CFLAGS = $(INCLUDES) -Wall -Wextra -Werror
FILES = ft_printf.c ft_putstr.c ft_strlen.c ft_putchar.c ft_putadress.c ft_putnbr.c ft_putunbr.c ft_puthexa_lower.c ft_puthexa_upper.c
OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o: %.c $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re