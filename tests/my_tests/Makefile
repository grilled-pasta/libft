# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/05 20:14:39 by alla              #+#    #+#              #
#    Updated: 2026/10/05 20:14:58 by alla             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_tests

CC = cc
CFLAGS = -Wall -Wextra -Werror -lbsd

LIBFT_DIR = ../..
LIBFT = $(LIBFT_DIR)/libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: test

test: $(NAME)
	./$(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c 
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

