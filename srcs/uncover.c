/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uncover.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:26:28 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:26:31 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void			uncover(t_list *queue)
{
	t_dance	*row;
	t_dance	*hrow;

	while (queue)
	{
		hrow = (t_dance*)(queue->content);
		row = hrow;
		while (row->right != hrow)
		{
			(row->up)->down = row;
			(row->down)->up = row;
			row = row->right;
		}
		(row->up)->down = row;
		(row->down)->up = row;
		queue = queue->next;
	}
}
