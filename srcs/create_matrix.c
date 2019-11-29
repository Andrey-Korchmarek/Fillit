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

static void test_change(matrix *root)
{
	root->current->y = -1;
}

matrix	*create_matrix(int *storage, int tetrnom)
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
	test_change(root);
	matrix_print(root);
	//ft_delete_dest_list(root);
	return (root);
}
