#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshirl <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/20 16:32:57 by dshirl            #+#    #+#              #
#    Updated: 2019/04/20 16:40:29 by dshirl           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HEADER = ./includes

TOTO = *.o

all: $(NAME)

$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc $(NAME) $(TOTO)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

