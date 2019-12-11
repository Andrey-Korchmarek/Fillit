/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:09:14 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/11 14:39:20 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		b(int y, int x, int a, int *coord)
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

int		d(int y, int x, int *coord, char map[16][17])
{
	if (map[y][x] == '.' &&
	map[y + coord[0]][x + coord[1]] == '.' &&
	map[y + coord[2]][x + coord[3]] == '.' &&
	map[y + coord[4]][x + coord[5]] == '.')
		return (1);
	return (0);
}

void	clean_map(char map[16][17], int y, int x, int *coord)
{
	map[y][x] = '.';
	map[y + coord[0]][x + coord[1]] = '.';
	map[y + coord[2]][x + coord[3]] = '.';
	map[y + coord[4]][x + coord[5]] = '.';
}

int		backtrack(int count, int id[26][2], char map[16][17], int a)
{
	int x;
	int y;

	if (!(y = 0) && !count)
		return (1);
	while (y <= a && ++y)
	{
		x = 0;
		while (x <= a && ++x)
		{
			if (b(y - 1, x - 1, a, g_[**id]) && d(y - 1, x - 1, g_[**id], map))
			{
				map[y - 1][x - 1] = id[0][1];
				map[y - 1 + g_[**id][0]][x - 1 + g_[**id][1]] = id[0][1];
				map[y - 1 + g_[**id][2]][x - 1 + g_[**id][3]] = id[0][1];
				map[y - 1 + g_[**id][4]][x - 1 + g_[**id][5]] = id[0][1];
				if (backtrack(count - 1, id + 1, map, a))
					return (1);
				clean_map(map, y - 1, x - 1, g_[**id]);
			}
		}
	}
	return (0);
}
