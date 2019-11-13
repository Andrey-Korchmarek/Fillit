/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_delete_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:27:21 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 13:27:25 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_delete_element(matrix *element)
{
	t_dance *afterTarget = NULL;

	if (element->current == NULL)
		exit(1);
	afterTarget = NULL;
	if (element->current->right == element->current)
	{
		if (element->current->up == element->current)
		{
			free(element->current);
			element->current = NULL;
		}
		else
		{
			afterTarget = element->current->up;
			element->current->up->down = element->current->down;
			element->current->down->up = element->current->up;
			free(element->current);
			element->current = afterTarget;
		}
	} else {
		afterTarget = element->current->right;
		element->current->right->left = element->current->left;
		element->current->left->right = element->current->right;
		element->current->up->down = element->current->down;
		element->current->down->up = element->current->up;
		free(element->current);
		element->current = afterTarget;
	}
}
