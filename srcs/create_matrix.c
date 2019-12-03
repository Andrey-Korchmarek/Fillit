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

matrix	*create_matrix(int *storage, int tetrnom, int size)
{
	matrix *root;
	int i;

	if (!(root = matrix_generator(size)))
		return (NULL);
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, size, storage[i], i);
		i++;
	}
	//matrix_print(root);
	return (root);
}
