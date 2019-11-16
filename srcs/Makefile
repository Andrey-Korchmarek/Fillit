# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 15:28:53 by aelphias          #+#    #+#              #
#    Updated: 2019/11/15 14:33:25 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a

CC = gcc -Wall -Wextra -Werror

SRC = *.c

HED = fillit.h

OBJ = $(SRC:.c=.o)

##.PHONY: all $(NAME) clean fclean re

all: $(NAME)

%.o : %.c $(HED)
	$(CC) -c $< -o $@ -I $(HED)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
