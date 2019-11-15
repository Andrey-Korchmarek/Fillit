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

SRCS = srcs/calculation.c srcs/check_neig1.c srcs/check_neig2.c \
srcs/check_sign.c srcs/coordinates.c srcs/eight_to_six.c srcs/fillit.c \
srcs/ft_bzero.c srcs/ft_lstadd.c srcs/ft_lstdel.c srcs/ft_lstdelone.c \
srcs/ft_lstiter.c srcs/ft_lstmap.c srcs/ft_lstnew.c srcs/ft_memalloc.c \
srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_putchar.c srcs/ft_putchar_fd.c \
srcs/ft_putstr.c srcs/ft_putstr_fd.c srcs/ft_realloc.c srcs/ft_strcount.c \
srcs/ft_strdel.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strplen.c \
srcs/ft_strsplit.c srcs/ft_tetadd.c srcs/ft_tetnew.c srcs/safe.c \
srcs/validation.c main.c

OBJ =  fillit.o calculation.o

INCLUDES = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
