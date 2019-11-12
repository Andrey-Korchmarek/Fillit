/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:07:56 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 20:08:01 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void matrix_add_right(matrix *root, char value, int x, int y)
{
	t_dance *prev;
	t_dance *tmp;

	prev = NULL;
	if (!(tmp = (t_dance*)malloc(sizeof(t_dance))))
		return ;
	tmp->letter = value;
	tmp->x = x;
	tmp->y = y;
	if (root->current == NULL)
	{
		root->current = tmp;
		tmp->right = tmp->left = tmp->up = tmp->down = tmp;
	}
	else
	{
		tmp->right = root->current;
		tmp->left = root->current->left;
		root->current->left->right = tmp;
		root->current->left = tmp;
		tmp->up = tmp->down = tmp;
	}
	root->size++;
}
