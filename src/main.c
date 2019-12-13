/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:19:42 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/12 16:41:03 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int g_t[19][6] = {
	{0, 1, 0, 2, 0, 3}, {0, 1, 0, 2, 1, 0},
	{0, 1, 0, 2, 1, 1}, {0, 1, 0, 2, 1, 2},
	{0, 1, 1, -1, 1, 0}, {0, 1, 1, 0, 1, 1},
	{0, 1, 1, 1, 1, 2}, {1, -2, 1, -1, 1, 0},
	{1, -1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 2},
	{0, 1, 1, 0, 2, 0}, {0, 1, 1, 1, 2, 1},
	{1, -1, 1, 0, 2, -1}, {1, 0, 1, 1, 2, 1},
	{1, -1, 1, 0, 2, 0}, {1, 0, 1, 1, 2, 0},
	{1, 0, 2, -1, 2, 0}, {1, 0, 2, 0, 2, 1},
	{1, 0, 2, 0, 3, 0}};

void	min_a(int count, int *a)
{
	while (*a * *a < 4 * count)
		++(*a);
	--(*a);
}

void	print(int a, char map[16][17])
{
	int i;
	int j;

	i = 0;
	while (i <= a)
	{
		j = 0;
		while (j <= a)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		fd;
	int		count;
	char	map[16][17];
	int		d[26][2];

	count = 0;
	a = 1;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	gen_map(map);
	if ((!(fd = open(argv[1], O_RDONLY)) || fillit(fd, d, &count) == -1))
	{
		ft_putstr("error\n");
		return (0);
	}
	min_a(count, &a);
	while (!backtrack(count, d, map, a))
		a++;
	print(a, map);
	close(fd);
	return (0);
}
