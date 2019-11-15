/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:28:53 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 10:28:56 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

matrix	*matrix_generator(int size)
{
	matrix	*root;
	int 	i;
	int 	j;

	root = matrix_create();
	matrix_add_right(root, ft_dannew('!', -1, -1));
	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j <= size)
			matrix_add_right(root, ft_dannew('@', i, j++));
		i++;
	}
	return (root);
}