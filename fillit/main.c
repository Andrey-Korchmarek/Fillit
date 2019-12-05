                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/01 15:19:42 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

	int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3}, /* 0*/     
							   {0, 1, 0, 2, 1, 0},/* 1*/
							   {0, 1, 0, 2, 1, 1},/* 2*/
							   {0, 1, 0, 2, 1, 2},/* 3*/
							   {0, 1, 1, -1, 1, 0},/* 4*/
							   {0, 1, 1, 0, 1, 1}, /*square 5*/
							   {0, 1, 1, 1, 1, 2},/* 6*/
							   {1, -2, 1, -1, 1, 0},/* 7*/
							   {1, -1, 1, 0, 1, 1},/* 8*/
							   {1, 0, 1, 1, 1, 2},/* 9*/
							   {0, 1, 1, 0, 2, 0},/* 10*/
							   {0, 1, 1, 1, 2, 1},/* 11*/
							   {1, -1, 1, 0, 2, -1},/* 12*/
							   {1, 0, 1, 1, 2, 1},/* 13*/
							   {1, -1, 1, 0, 2, 0},/* 14*/
							   {1, 0, 1, 1, 2, 0},/* 15*/
							   {1, 0, 2, -1, 2, 0},/* 16*/
							   {1, 0, 2, 0, 2, 1},/* 17*/
							   {1, 0, 2, 0, 3, 0}};/* 18*/

int main(int argc, char **argv)
{
	char	map[16][17]; /*gen_map*/
	int		fd; 
	int		i;
	int		count;
	int		storage[26];

	count = 0;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	printf("{main fd = %d}\n", fd);
	printf("{main 1}\n");
	gen_map(map);
	printf("{main - after gen_map - 2}\n");
	fillit(fd, storage, &count);
	printf("{main after fillit, count %d}\n", count);
	printf("{main  after fillit - 3}\n");
	backtrack(&count, storage, map);
	printf("{main after backtrack 4}\n");
	i = 0;
	printf("from main. Storage =\n");
		printf(" Number tet in storage:\n ");
	while (i < count)
	{
		printf("%d ", storage[i]);
		i++;
	}
		printf("\n");
	close(fd);
	return (0);
}
