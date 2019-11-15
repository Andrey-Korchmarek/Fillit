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

void matrix_add_right(matrix *root, t_dance *tmp)
{
	t_dance *prev;

	prev = NULL;
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
