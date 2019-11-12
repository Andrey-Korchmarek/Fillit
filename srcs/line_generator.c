/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:45:51 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 10:45:55 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

//Ещё не закончил
t_dance	*line_generator(char count, int *coordinates)
{
	matrix *head;
	t_dance	*tmp;
	int 	i;

	head = matrix_create();
	matrix_add_right(head, count, -1, 0);
	head =ft_dannew(count, -1, 0);
	i = 0;
	while (i < 8)
	{
		tmp = ft_dannew(count, coordinates[i], coordinates[i + 1]);
		i += 2;
	}
	return (head);
}
#include "includes/fillit.h"

matrix	*matrix_generator(int size)
{
	matrix	*root;
	int 	i;
	int 	j;

	root = matrix_create();
	matrix_add_right(root, '!', -1, -1);
	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j <= size)
			matrix_add_right(*root, '@', i, j++);
		i++;
	}
	return (root);
}