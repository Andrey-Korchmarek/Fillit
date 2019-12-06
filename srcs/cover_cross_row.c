/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cover_cross_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:12:20 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:12:25 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Принимает лист для хранения скрытых строк
 *
 * Возвращает число в зависимости от результата
 * 1 если всё хорошо
 * 0
 * -1
 * */

int		cover_cross_row(t_list **queue, t_dance *goal)
{
	t_dance	*tmp;
	t_dance	*t_down;
	t_dance	*t_left;
	int		res;

	tmp = goal->right;
	while (tmp != goal)
	{
		t_down = tmp->down;
		if (t_down->letter == '@')
			t_down = t_down->down;
		while (t_down != tmp)
		{
			t_left = t_down->left;
			while (t_left->x != -1)
				t_left = t_left->left;
			if ((res = cover_row(t_left, queue)) < 1)
				return (res);
			if (t_down->down->letter == '@')
				t_down = t_down->down;
			t_down = t_down->down;
		}
		tmp = tmp->right;
	}
	return (1);
}
