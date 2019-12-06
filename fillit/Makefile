# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 11:36:31 by aelphias          #+#    #+#              #
#    Updated: 2019/12/06 16:41:44 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS =  main.c gen_map.c fillit.c backtrack.c validation.c check_sign.c \
check_neig1.c check_neig2.c first.c fillit.h ../libft/libft.a check_tetr.c \
 ft_strcount.c
 
FLG = -g -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(FLG) $(SRCS) 
