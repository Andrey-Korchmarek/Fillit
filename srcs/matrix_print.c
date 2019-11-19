/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 10:43:25 by mashley           #+#    #+#             */
/*   Updated: 2019/11/16 10:43:28 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_print(matrix *root)
{
	ft_putnode(root);
	root->current = root->current->right;
	while (root->current->letter != '!')
	{
		ft_putnode(root);
		root->current = root->current->right;
	}
	root->current = root->current->down;
	while (root->current->letter != '!')
	{
		ft_putstr("\n ");
		ft_putnode(root);
		root->current = root->current->right;
		while (root->current->x != -1)
		{
			ft_putnode(root);
			root->current = root->current->right;
		}
		root->current = root->current->down;
	}
	ft_putstr("\n\n ");
}
