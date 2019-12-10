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

void	min_a(int count, int *a) // "a" means a side of map square
{
    while(*a * *a < 4 * count)
        ++(*a);
	--(*a);
} 


int main(int argc, char **argv)
{
	char	map[16][17]; /*gen_map*/
	int		fd; 
	int 	a;
	int		count;
	int		storage[26][2];

	count = 0;
	a = 1;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	gen_map(map);
	if ((fillit(fd, storage, &count) == -1))
		ft_putstr("error\n");
	min_a(count, &a);
	while (!backtrack(count, storage, map, a))
		a++;
	printf("---map---\n\n");
	print(a, map);
	close(fd);
	return (0);
}
