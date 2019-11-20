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
	}
	else
	{
		prev = root->current->left;
		root->current->left = tmp;
		prev->right = tmp;
		tmp->left = prev;
		tmp->right = root->current;
	}
	root->size++;
}
