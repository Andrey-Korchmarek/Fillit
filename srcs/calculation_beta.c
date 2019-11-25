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

char	*calculation_beta(int *storage, size_t tetrnom)
{
	matrix	*root;
	size_t	i;

	if (!(root = matrix_generator(min_map(tetrnom))))
		return (NULL);
	matrix_print(root);
	root->size = tetrnom;
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, min_map(tetrnom), storage[i], i);
		i++;
	}

	matrix_dancing_links(&root);
	matrix_delete(&root);
	return ("calculation_beta");
}
