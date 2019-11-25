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

#include "includes/fillit.h"

void	matrix_delete(matrix **root)
{
	t_dance *tmp1;
	t_dance *tmp2;

	if (!root || !*root || !(*root)->current)
		return ;
	tmp1 = (*root)->current->up;
	while (tmp1 != (*root)->current)
	{
		tmp2 = tmp1->up;
		matrix_delete_line(tmp1);
		tmp1 = tmp2;
	}
	tmp1 = (*root)->current->left;
	while (tmp1 != (*root)->current)
	{
		tmp2 = tmp1->left;
		free(tmp1);
		tmp1 = tmp2;
	}
	free((*root)->current);
	free(*root);
	*root = NULL;
}
