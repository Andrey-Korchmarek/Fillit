# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 12:09:43 by mashley           #+#    #+#              #
#    Updated: 2019/11/03 10:37:44 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mashley.a

SRCS = check_neig.c ft_abs.c ft_intlen.c ft_range.c ft_shrinking_gap.c ft_strchri.c ft_strcount.c ft_strjoinfree.c ft_strplen.c hard_validation.c simple_validation.c validation.c

OBJ = ft_atoi.o ft_atoll.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_ischar.o ft_isdigit.o ft_islower.o ft_isprint.o ft_isspace.o ft_isupper.o \
ft_itoa.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o \
ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o \
ft_putstr_fd.o ft_strcat.o ft_strchr.o \
ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o \
ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o \
ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o \
ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o \
ft_tolower.o ft_toupper.o ft_realloc.o ft_strnlen.o \
ft_memrcpy.o  ft_lstnew.o ft_lstdel.o

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
