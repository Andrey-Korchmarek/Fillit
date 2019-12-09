/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:08:26 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/30 15:31:27 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

void	calculation(int id, int count, char map[16][17])
{
	extern int g_tetramines[19][10];
	int *coord;
	char num;
	int i;
	int x;
	int y;
	char letter;

	letter = (char)count + 64;
	coord = g_tetramines[id];
	i = 0;
	x = 0;
	y = 0;
	num = 'A';
	map[x][y] = num;
	while (i < 6)
	{
 		map[x + coord[i]][y + coord[i + 1]] = num;
		i += 2; 
	}
	
}
