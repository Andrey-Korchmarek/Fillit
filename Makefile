# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 12:55:50 by mashley           #+#    #+#              #
#    Updated: 2019/12/09 12:56:00 by mashley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME	= fillit


SRC_DIR = ./src
FILES	=	main.c srcs/algoritm_x.c srcs/calculation_and_output.c srcs/check_neig1.c srcs/check_neig2.c srcs/check_sign.c srcs/check_tetr.c srcs/cover_all.c srcs/cover_cross_row.c srcs/cover_row.c srcs/cover_same_letter.c srcs/create_matrix.c srcs/delete_dest_row.c srcs/dicycle.c srcs/fillit.c srcs/first.c srcs/ft_bzero.c srcs/ft_dannew.c srcs/ft_isupper.c srcs/ft_lstadd.c srcs/ft_lstdel.c srcs/ft_lstdelone.c srcs/ft_lstiter.c srcs/ft_lstmap.c srcs/ft_lstnew.c srcs/ft_memalloc.c srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_putchar.c srcs/ft_putchar_fd.c srcs/ft_putnbr.c srcs/ft_putnbr_fd.c srcs/ft_putnode.c srcs/ft_putstr.c srcs/ft_putstr_fd.c srcs/ft_realloc.c srcs/ft_strcount.c srcs/ft_strdel.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strplen.c srcs/ft_strsplit.c srcs/get_coord.c srcs/line_generator.c srcs/matrix_add_down.c srcs/matrix_add_line.c srcs/matrix_add_right.c srcs/matrix_delete.c srcs/matrix_generator.c srcs/matrix_new.c srcs/matrix_print.c srcs/min_map.c srcs/print_tetris.c srcs/read_and_validation.c srcs/stack_add.c srcs/stack_del_node.c srcs/stack_new.c srcs/uncover.c srcs/uncover_and_free.c srcs/validation.c
#SRC		= $(addprefix $(SRC_DIR)/,$(FILES))
INC		= ./includes/fillit.h
OBJ		= $(FILES:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) | lib
	@$(CC) $(CFLAGS) -L ./libft -lft -I ./includes -I ./libft $(OBJ) -o $(NAME)

%.o: %.c $(INC)
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

lib:
	@make -C ./libft

clean:
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft

fclean: 	clean
	@make fclean -C ./libft
	@/bin/rm -f $(NAME)

re: fclean all
