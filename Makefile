# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grapapor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 15:53:35 by grapapor          #+#    #+#              #
#    Updated: 2018/07/19 15:55:25 by grapapor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c)

INCLUDES = includes/

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror
REMOVE = /bin/rm -f
RANLIB = ranlib

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I $(INCLUDES)
	ar rc $(NAME) *.o
	$(RANLIB) $(NAME)

all: $(NAME)

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
