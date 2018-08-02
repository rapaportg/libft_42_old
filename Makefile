# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grapapor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 15:53:35 by grapapor          #+#    #+#              #
#    Updated: 2018/08/01 18:39:11 by grapapor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJECT = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra \
-I libft.h
NOC=\033[0m
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
SRC = $(wildcard *.c)

all: $(NAME)

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "$(GREEN)LIBFT ✓ Created libft.a"

$(OBJECT): $(SRC)
	@gcc $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJECT)
	@echo "$(BLUE)LIBFT ✓ Removed .o files$(NOC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)LIBFT ✓ Removed libft.a$(NOC)"

re: fclean all

.PHONY: all clean fclean re
