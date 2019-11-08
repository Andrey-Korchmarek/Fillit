# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 11:36:31 by aelphias          #+#    #+#              #
#    Updated: 2019/11/07 16:00:29 by io               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = fillit.c calculation.c

OBJ =  fillit.o calculation.o

INCLUDES = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
