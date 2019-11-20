/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_dancing_links.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:53:26 by mashley           #+#    #+#             */
/*   Updated: 2019/11/20 16:28:38 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char *matrix_dancing_links(matrix **root)
{
	t_dance *tmp;

	tmp = NULL;
	tmp = ((*root)->current->right->down);
	//tmp = best_col(root);
	//tmp = tmp->down;
	while (tmp->letter != '@')
	{
		matrix_recur(tmp, root);
		//print_result(answer, min_map((*root)->size));
		matrix_print(*root);
		ft_putchar('T');

		tmp = tmp->down;
		continue ;
	}
	return (" Dancing Links");
}
