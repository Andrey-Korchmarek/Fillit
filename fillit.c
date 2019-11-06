/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/06 14:27:15 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*int numbers[3] = {15, 29, 51};  *//*stick Lrleft */

int coordinate[3][6] =  {{1, 0, 2, 0, 3, 0},
						{1, 0, 2, 0, 0, 1},
						{1, 0, 0, 1, 1, 1}}; /*square*/


int main(void)
{ //................
	/*int fd;*/
	char field[4][5];
	int x;
	int y;
	int i;

	 i = 0;
	 x = 0;
	 y = 0;


	ft_memset(field[0],'.',4);
	field[0][4] = '\0';
	ft_memset(field[1],'.',4);
	field[1][4] = '\0';
	ft_memset(field[2],'.',4);
	field[2][4] = '\0';
	ft_memset(field[3],'.',4);
	field[3][4] = '\0';
//		  x  y
	field[0][0]= 'A';
	field[0][1]= 'A';
	field[1][0]= 'A';
	field[1][1]= 'A';

	while (i < 4)
	{
		printf("%s\n",field[i]);
		i++;
	}


	/*printf("%s\n",field[1]);
	printf("%s\n",field[2]);
	printf("%s\n",field[3]);



*/














	/*if (argc != 2)
		ft_putstr("usage: ./fillit list_of_terminos\n");
	fd = open(argv[1], O_RDONLY);
	read_and_validation(fd);
*//* 	calculation();
	output(); *//*
	close(fd);*/
	return (0);
}
