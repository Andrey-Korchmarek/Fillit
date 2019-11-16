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

static void	recur1(int *coord, int i, int *c, matrix *root, int j, int a, int m)
{
	if (j > a -c[9])
		return;
	coord[0] = i;
	coord[1] = j;
	coord[2] = i + c[0];
	coord[3] = j + c[1];
	coord[4] = i + c[2];
	coord[5] = j + c[3];
	coord[6] = i + c[4];
	coord[7] = j + c[5];
	matrix_add_line(&root, line_generator('A' + m, coord));
	recur1(coord, i, c, root, j + 1, a, m);
}



char	*recur(int *storage, int len)
{
	extern int	g_tetramines[19][10];
	matrix		*root;
	int 		m;
	int 		*c;
	int 		i;
	int 		j;
	int 		coord[8];
	int 		a;

	a = min_map(len);
	root = matrix_generator(a);
	m = 0;
	while (m < len)
	{
		c = g_tetramines[storage[m]];
		i = c[6];
		while (i <= (a - c[8]))
		{
			j = c[7];
			recur1(coord, i, c, root, j, a, m);
			i++;
		}
		m++;
	}
	printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
	root->current = root->current->right;
	while (root->current->letter != '!')
	{
		printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
	}
	root->current = root->current->down;
	while (root->current->letter != '!')
	{
		printf("\n %c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
		while (root->current->x != -1)
		{
			printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
			root->current = root->current->right;
		}
		root->current = root->current->down;
	}
	return ("test2");
}

/*
char	*test2(int *storage, int len)
{
	extern int	g_tetramines[19][10];
	matrix		*root;
	int 		m;
	int 		*c;
	int 		i;
	int 		j;
	int 		coord[8];
	int 		a;

	a = min_map(len);
	root = matrix_generator(a);
	m = 0;
	while (m < len)
	{
		c = g_tetramines[storage[m]];
		i = c[6];
		while (i <= (a - c[8]))
		{
			j = c[7];
			while (j <= (a - c[9]))
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




	printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
	root->current = root->current->right;
	while (root->current->letter != '!')
	{
		printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
	}
	root->current = root->current->down;
	while (root->current->letter != '!')
	{
		printf("\n %c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
		while (root->current->x != -1)
		{
			printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
			root->current = root->current->right;
		}
		root->current = root->current->down;
	}
	return ("test2");
}
*/