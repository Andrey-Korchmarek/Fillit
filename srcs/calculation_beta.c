/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_beta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:20:02 by mashley           #+#    #+#             */
/*   Updated: 2019/11/15 14:20:07 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char	*calculation_beta(int *storage, int tetrnom)
{
	matrix *root;
	int i;

	if (!(root = matrix_generator(min_map(tetrnom))))
		return (NULL);
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, min_map(tetrnom), storage[i], i);
		i++;
	}





	printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
	root->current = root->current->right;
	while (root->current->letter != '!')
	{
		printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
	}
	root->current = root->current->down;
	while (root->current->letter != '!')
	{
		printf("\n %c %d %d | ", root->current->letter, root->current->x, root->current->y);
		root->current = root->current->right;
		while (root->current->x != -1)
		{
			printf("%c %d %d | ", root->current->letter, root->current->x, root->current->y);
			root->current = root->current->right;
		}
		root->current = root->current->down;
	}
	return ("calculation_beta");
}
