/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:00:36 by mashley           #+#    #+#             */
/*   Updated: 2019/11/25 16:00:47 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/* Тестовый файл */

static void	test1(matrix *root, matrix *line)
{
	matrix	*hat;
	int 	i;

	while (line->current->x != -1)
		line->current = line->current->left;
	matrix_add_down(root, line->current);
	hat = matrix_create();
	hat->current = (*root).current->right;
	line->current = line->current->right;
	i = 0;
	while (i < 4)
	{
		while (hat->current->x != line->current->x ||
			   hat->current->y != line->current->y)
			hat->current = hat->current->right;
		matrix_add_down(hat, line->current);
		line->current = line->current->right;
		i++;
	}
//
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
//	while (hat->current->x != line->x ||
//		   hat->current->y != line->y)
//		hat->current = hat->current->right;
//	matrix_add_down(hat, line);
//	line = line->right;
}

static matrix	*test2(char count, int *coordinates)
{
	matrix *head;
	t_dance	*tmp;
	int 	i;

	head = NULL;
	matrix_add_right(head, ft_dannew(count, -1, 0));
	i = 0;
	while (i < 8)
	{
		tmp = ft_dannew(count, coordinates[i], coordinates[i + 1]);
		matrix_add_right(head, tmp);
		i += 2;
	}
	return (head);
}

char	*test(int *storage, int tetrnom)
{
	matrix	*root;
	int		i;
	extern int	g_tetramines[19][10];
	int	count;
	int j;
	int *c;
	int *coord;
	matrix *line;
	int a;

	if (!(root = test_matrix_generator(min_map(tetrnom))))
		return (NULL);
	a = min_map(tetrnom);
	root->size = tetrnom;

	count = 0;
	while (count < tetrnom)
	{
		c = g_tetramines[storage[count]];
		i = c[6];
		while (i <= (a - c[8]))
		{
			j = c[7];
			while (j <= (a - c[9]))
			{

				coord = get_coord(i, j, storage[count]);


				line = test2('A' + count, coord);

				free(coord);

				test1(root, line);


				j++;
			}
			i++;
		}
		count++;
		ft_putchar('\n');
	}

	//matrix_dancing_links(&root);
	//matrix_print(root);
	return ("test");
}
