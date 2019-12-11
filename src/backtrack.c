/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/11 13:29:31 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

int		check_borders(int y, int x, int a, int *coord)
{
	if (y + coord[0] >= 0 && y + coord[0] <= a &&
	y + coord[2] >= 0 && y + coord[2] <= a &&
	y + coord[4] >= 0 && y + coord[4] <= a &&
	x + coord[1] >= 0 && x + coord[1] <= a &&
	x + coord[3] >= 0 && x + coord[3] <= a &&
	x + coord[5] >= 0 && x + coord[5] <= a)
		return (1);
	return (0);
}

int		check_dots(int y, int x, int *coord, char map[16][17])
{
	if (map[y][x] == '.' &&
	map[y + coord[0]][x + coord[1]] == '.' &&
	map[y + coord[2]][x + coord[3]] == '.' &&
	map[y + coord[4]][x + coord[5]] == '.')
		return (1);
	return (0);
}

int		backtrack(int count, int storage[26][2], char map[16][17], int a)
{
	int x;
	int y;
	int *coord;

	y = 0;
	coord = g_tetr[storage[0][0]];
	if (!count)
		return (1);
	while (y <= a)
	{
		x = 0;
		while (x <= a)
		{
			if (check_borders(y, x, a, coord) && check_dots(y, x, coord, map))
			{
				map[y][x] = storage[0][1];
				map[y + coord[0]][x + coord[1]] = storage[0][1];
				map[y + coord[2]][x + coord[3]] = storage[0][1];
				map[y + coord[4]][x + coord[5]] = storage[0][1];
				if (backtrack(count - 1, ++storage, map, a))
					return (1);
				--storage;
				map[y][x] = '.';
				map[y + coord[0]][x + coord[1]] = '.';
				map[y + coord[2]][x + coord[3]] = '.';
				map[y + coord[4]][x + coord[5]] = '.';
			}
			++x;
		}
		++y;
	}
	return (0);
}
