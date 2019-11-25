/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_safe_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:28:48 by mashley           #+#    #+#             */
/*   Updated: 2019/11/20 16:28:52 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_safe_line(matrix **root, t_dance *line)
{
	int		i;
	matrix	*tmp;

	if (!root || !*root || !line)
		return ;
	while (line->x != -1)
		line = line->left;
	if ((*root)->current == NULL)
	{
		(*root)->current = line;
		return ;
	}
	else
	{
		tmp = (*root);
		i = 0;
		while (i < 5)
		{
			matrix_add_down(tmp, line);
			tmp->current = tmp->current->right;
			line = line->right;
			i++;
		}
	}
}
