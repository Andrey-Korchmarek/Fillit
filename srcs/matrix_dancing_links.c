/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_dancing_links.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:53:26 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:53:29 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char *matrix_dancing_links(matrix **root)
{
	t_dance *tmp;
	matrix	*answer;
	matrix	*lines;

	answer = matrix_create();
	lines = matrix_create();
	tmp = (*root)->current->right->down;
	//tmp = best_col(root);
	//tmp = tmp->down;
	while (tmp->letter != '@')
	{
		matrix_recur(tmp, root, &answer, &lines);
		print_result(answer, min_map((*root)->size));
		tmp = tmp->down;
		continue ;
	}
	return (" Dancing Links");
}
