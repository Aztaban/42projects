# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 11:27:58 by mjusta            #+#    #+#              #
#    Updated: 2025/05/21 12:06:30 by mjusta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_test
CC = cc
CFLAGS = -Wall -Wextra -Werror -I..

SRC = $(wildcard ../ft_*.c) $(wildcard tests/*.c) $(wildcard utils/*.c) main.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean
