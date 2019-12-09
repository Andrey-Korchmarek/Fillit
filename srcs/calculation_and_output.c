/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_and_output.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:50:04 by mashley           #+#    #+#             */
/*   Updated: 2019/12/03 17:50:08 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_ring	*calculation_and_output(int *storage, int tetnom)
{
	t_ring	*root;
	t_cwr	*stack;
	int		size;
	int		res;

	res = 0;
	size = min_map(tetnom);
	while (!res)
	{
		root = create_matrix(storage, tetnom, size);
		stack = NULL;
		if ((res = algoritm_x((root->current)->down, &stack)) != 0)
			break ;
		uncover_and_free(&stack, 2);
		matrix_delete(root);
		size++;
	}
	if (res == 1)
		print_tetris(root);
	uncover_and_free(&stack, 2);
	return (root);
}
