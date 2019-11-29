/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_sqr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 06:03:24 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 06:03:27 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int			ft_find_smallest_sqr(int *storage, int n, matrix *root)
{
	int res;
	t_cwr *stack;
	int n_tet;

	res = 0;
	while (!res)
	{
		if (!(root = create_matrix(storage, n)))
			return (-1);
		if ((n_tet = ft_check_valid_root(root, n)) > 0)
		{
			stack = NULL;
			if ((res = ft_fillit(root, (root->current)->down, &stack, n_tet)) !=
				0)
				break;
			ft_uncover_and_free(&stack, 2);
		}
		ft_delete_dest_list(root);
		n++;
	}
	if (res == 1)
		ft_print_tetris(root->current, n);
	ft_uncover_and_free(&stack, 2);
	return (res);
}