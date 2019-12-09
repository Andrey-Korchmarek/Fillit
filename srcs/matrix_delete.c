/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:52:05 by mashley           #+#    #+#             */
/*   Updated: 2019/11/13 10:52:24 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	matrix_delete(t_ring *root)
{
	t_dance	*tmp1;
	t_dance	*tmp2;

	if (!root || !root->current)
		return ;
	tmp1 = (root->current)->up;
	while (tmp1 != root->current)
	{
		tmp2 = tmp1->up;
		delete_dest_row(tmp1);
		tmp1 = tmp2;
	}
	tmp1 = (root->current)->left;
	while (tmp1 != root->current)
	{
		tmp2 = tmp1->left;
		free(tmp1);
		tmp1 = tmp2;
	}
	free(root->current);
	root->current = NULL;
	free(root);
	root = NULL;
}
