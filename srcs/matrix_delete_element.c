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
	t_dance *aftertarget;

	if (element->current == NULL)
		exit(1);
	aftertarget = NULL;
	if (element->current->right == element->current)
	{
		if (element->current->up == element->current)
		{
			free(element->current);
			element->current = NULL;
		}
		else
		{
			aftertarget = element->current->up;
			element->current->up->down = element->current->down;
			element->current->down->up = element->current->up;
			free(element->current);
			element->current = aftertarget;
		}
	}
	else
	{
		aftertarget = element->current->right;
		element->current->right->left = element->current->left;
		element->current->left->right = element->current->right;
		element->current->up->down = element->current->down;
		element->current->down->up = element->current->up;
		free(element->current);
		element->current = aftertarget;
	}
}
