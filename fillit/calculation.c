/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:08:26 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/23 22:11:40 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

int g_tetramines[19][6] =	  {{0, 1, 0, 2, 0, 3}, /* 0*/
							   {0, 1, 0, 2, 1, 0},/* 1*/
							   {0, 1, 0, 2, 1, 1},/* 2*/
							   {0, 1, 0, 2, 1, 2},/* 3*/
							   {0, 1, 1, -1, 1, 0},/* 4*/
							   {0, 1, 1, 0, 1, 1},/*square5*/
							   {0, 1, 1, 1, 1, 2},/* */
							   {1, -2, 1, -1, 1, 0},/* */
							   {1, -1, 1, 0, 1, 1},/* */
							   {1, 0, 1, 1, 1, 2,},/* */
							   {0, 1, 1, 0, 2, 0},/* */
							   {0, 1, 1, 1, 2, 1},/* */
							   {1, -1, 1, 0, 2, -1},/* */
							   {1, 0, 1, 1, 2, 1},/* */
							   {1, -1, 1, 0, 2, 0},/* */
							   {1, 0, 1, 1, 2, 0},/* */
							   {1, 0, 2, -1, 2, 0},/* */
							   {1, 0, 2, 0, 2, 1},/* */
							   {1, 0, 2, 0, 3, 0}};/* */


void	calculation(int id)
{
	int *coord = g_tetramines[id];
	char num;
	char map[4][5];
	int i;
	int x;
	int y;

	x = 0;
	y = 0;
	num = 'A';
	i = 0;
	while (i < 4)
	{
		map[i][4] = '\0';
		i++;
	}
	i = 0;

	map[x][y] = num;
	while (i < 6)
	{
 		map[x + coord[i]][y + coord[i + 1]] = num;
		i += 2;
	}


i = 0;
	while ( i < 4)
	{
		printf("%s\n", map[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	int fd;
	char *result;
	
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	result = fillit(fd);
	close(fd);
	ft_putstr(result);
	return (0);
}
