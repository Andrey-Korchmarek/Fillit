/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cover_same_letter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:15:13 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:15:16 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Функция принимает узел и очередь?
 *
 * Скрывает все строки с такой же буквой как целевого узла кроме его самого
 * */

void	cover_same_letter(t_dance *goal, t_list **queue)
{
	t_dance	*node;

	node = goal->down;
	while (node != goal)
	{
		if (goal->letter == node->letter)
			cover_row(node, queue);
		node = node->down;
	}
}
