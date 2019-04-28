# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshirl <dshirl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 18:56:07 by dshirl            #+#    #+#              #
#    Updated: 2019/04/22 20:52:48 by dshirl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c 

HEADER = libft.h 

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