/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:20:55 by mashley           #+#    #+#             */
/*   Updated: 2019/11/15 14:20:59 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	test2(int *storage, int len)
{
	extern int	g_tetramines[19][10];
	matrix		*root;
	int 		m;
	int 		c[10];
	int 		i;
	int 		j;
	int 		coord[8];

	root = matrix_generator(min_map(len));
	m = 0;
	while (m < len)
	{
		c = g_tetramines[storage[m]];
		i = c[6];
		while (i <= (min_map(len) - c[8]))
		{
			j = c[7];
			while (j <= (min_map(len) - c[9]))
			{
				coord[0] = i;
				coord[1] = j;
				coord[2] = i + c[0];
				coord[3] = j + c[1];
				coord[4] = i + c[2];
				coord[5] = j + c[3];
				coord[6] = i + c[4];
				coord[7] = j + c[5];
				matrix_add_line(&root, line_generator('A' + m, coord));
				j++;
			}
			i++;
		}
		m++;
	}
}
