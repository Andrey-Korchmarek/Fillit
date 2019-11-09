/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:08:26 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/08 15:08:29 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	calculation(void)
{
	int coord[6];
	char queue;
	char field[4][5];
	int i;
	int x;
	int y;

	coord = {0, 1, 1, 0, 1, 1};
	x = 2;
	y = 2;
	queue = 'A';
	i = 0;
	while (i < 4)
	{
		ft_memset(field[i], '.', 4);
		field[i][4] = '\0';
		i++;
	}
	i = 0;

	field[x][y] = queue;
	while (i < 6)
	{
 		field[x + coord[i]][y + coord[i + 1]] = queue;
		i += 2;
	}


i = 0;
	while ( i < 4)
	{
		printf("%s\n", field[i]);
		i++;
	}
}
int main(void)
{
	calculation();
	return (0);
}
