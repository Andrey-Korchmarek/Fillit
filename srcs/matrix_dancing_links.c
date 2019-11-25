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

	if (!root || !*root)
		return (NULL);
	tmp = NULL;
	ft_putstr("W\n");
	tmp = ((*root)->current->right->down);
	print_node((*root)->current);
	print_node((*root)->current->right);
	tmp = (*root)->current->right;
	print_node(tmp->down);
	//tmp = best_col(root);
	//tmp = tmp->down;
	while (tmp->letter != '@')
	{
		ft_putstr("C\n");
		matrix_recur(tmp, root);
		//print_result(answer, min_map((*root)->size));
		matrix_print(*root);
		ft_putchar('T');

		tmp = tmp->down;
		continue ;
	}
	return (" Dancing Links");
}
