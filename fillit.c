/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/05 16:05:04 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int numbers[3] = {15, 29, 51}; // Палка Lrleft квадрат

int coordinat[3][6] =  {{1, 0, 2, 0, 3, 0},
						{1, 0, 2, 0, 0, 1},
						{1, 0, 0, 1, 1, 1}};


int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		ft_putstr("usage: ./fillit list_of_terminos\n");
	fd = open(argv[1], O_RDONLY);
	read_and_validation(fd);
/* 	calculation();
	output(); */
	close(fd);
	return (0);
}
