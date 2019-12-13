# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 13:58:56 by aelphias          #+#    #+#              #
#    Updated: 2019/12/12 16:57:03 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re lib

NAME	= fillit

SRC_DIR = ./src

FILES	=	main.c gen_map.c fillit.c backtrack.c validation.c check_sign.c	\
			check_neig1.c check_neig2.c first.c identify_tetr.c				\
			ft_strcount.c
	
SRC		= $(addprefix $(SRC_DIR)/,$(FILES))

INC		= fillit.h

OBJ		= $(SRC:.c=.o)

FT_LIB = libft/libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror 

all:  $(NAME)

$(NAME): $(OBJ) $(FT_LIB) ./libft/libft.a
	$(CC) $(CFLAGS) -L ./libft -lft -I . -I ./libft $(OBJ) -o $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

FORCE:		;

$(FT_LIB):	FORCE
			make -C ./libft

clean:		
	/bin/rm -f $(OBJ)
	make clean -C ./libft

fclean: 	clean
	make fclean -C ./libft
	/bin/rm -f $(NAME)

re: fclean all
