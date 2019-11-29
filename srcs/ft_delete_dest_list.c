/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_dest_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 06:02:24 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 06:02:28 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void		ft_delete_dest_list(matrix *root)
{
	t_dance	*tmp1;
	t_dance	*tmp2;

	if (!root || !root->current)
		return ;
	tmp1 = root->current->up;
	while (tmp1 != root->current)
	{
		tmp2 = tmp1->up;
		ft_delete_dest_row(tmp1);
		tmp1 = tmp2;
	}
	tmp1 = root->current->left;
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
