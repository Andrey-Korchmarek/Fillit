# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 11:36:31 by aelphias          #+#    #+#              #
<<<<<<< HEAD
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
=======
#    Updated: 2019/11/01 11:58:09 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filit
>>>>>>> 653e653f195ae161a43b17dbd9449ed607e7f4aa
