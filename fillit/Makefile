#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: echeyk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 16:13:38 by echeyk            #+#    #+#              #
#    Updated: 2019/08/17 16:15:05 by echeyk           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRC = main.c \
valid.c \
get_struct.c \
map.c \
solution.c

OBJ = *.o

INCLUDES = fillit.h

LIB = ./libft

CC = @gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C $(LIB) re
	$(CC) $(CFLAGS) -L $(LIB) -lft $(SRC) -I $(LIB) -I $(INCLUDES) -o $(NAME) 

clean:
	@make -C $(LIB) clean

fclean: clean
	@make -C $(LIB) fclean
	@/bin/rm -f $(NAME)

re: fclean all
