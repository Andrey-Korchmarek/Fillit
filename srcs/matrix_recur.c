/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_recur.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:56:31 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:56:34 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_recur(t_dance *tmp, matrix **root,
						matrix **answer, matrix **lines)
{
	t_dance	*chosen;
	char 	tetr;

	matrix_print(*root);
	if (matrix_check(*root, *answer) == 1)
	{
		//print_result(*answer,)
		//matrix_print(*root);
		return ;
	}

	matrix_add_line(lines, tmp);
	while (tmp->left->x != -1)
		tmp = tmp->left;
	while (tmp->x != -1)
	{
		chosen = tmp;
		tmp = tmp->down;
		while (tmp->letter != '@')
		{
			matrix_hide_line(tmp, lines);
			tmp = tmp->down;
		}
		tmp = chosen->right;
	}
	tetr = tmp->letter;
	while (tmp->letter != '!')
	{
		if (tmp->letter == tetr)
			matrix_hide_line(tmp, lines);
		tmp = tmp->down;
	}
	while (chosen->x != -1)
	{
		matrix_hide_column(chosen, answer);
		chosen = chosen->left;
	}
	matrix_recur(tmp->down->right, root, answer, lines);
}
