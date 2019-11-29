/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 06:03:08 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 06:03:11 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	ft_fillit(matrix *root, t_dance *goal, t_cwr **stack, int tet_count)
{
	t_list		*q;
	int			cov_res;
	char		a;

	if (goal->letter == '!')
		return (1);
	a = goal->letter;
	while (goal->letter == a)
	{
		q = NULL;
		if ((cov_res = ft_cover_all(&q, goal)) < 0)
			return (-1);
		if (cov_res > 0)
		{
			ft_add_to_stack(stack, q);
			if (ft_fillit(root, goal->down, stack, tet_count) == 1)
				return (1);
			if (cov_res < 2)
				ft_uncover_and_free(stack, 1);
		}
		goal = goal->down;
	}
	return (0);
}
