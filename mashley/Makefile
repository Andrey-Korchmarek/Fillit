# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 12:09:43 by mashley           #+#    #+#              #
#    Updated: 2019/10/02 17:06:42 by mashley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mashley.a

SRCS = check_neig.c ft_abs.c ft_intlen.c ft_range.c ft_shrinking_gap.c ft_strchri.c ft_strcount.c ft_strjoinfree.c ft_strplen.c hard_validation.c simple_validation.c validation.c

OBJ = check_neig.o ft_abs.o ft_intlen.o ft_range.o ft_shrinking_gap.o ft_strchri.o ft_strcount.o ft_strjoinfree.o ft_strplen.o hard_validation.o simple_validation.o validation.o

INCLUDES = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
