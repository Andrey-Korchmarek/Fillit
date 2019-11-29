/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cover_cross_row.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:36:38 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:36:41 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		ft_cover_cross_row(t_list **queue, t_dance *goal)
{
	t_dance	*tmp;
	t_dance	*t_down;
	t_dance	*t_left;
	int		res;

	tmp = goal->right;
	while (tmp != goal)//идти вправо один круг
	{
		t_down = tmp->down;//идем вниз, перепрыгивая 1ю строку, один круг
		if (t_down->letter == '@')
			t_down = t_down->down;
		while (t_down != tmp)//один круг
		{
			t_left = t_down->left;
			while (t_left->x >= 0)//идём влево пока не встретим хедер
				t_left = t_left->left;
			if ((res = ft_cover_row(t_left, queue)) < 1)//скрываем строку и добавляем в лист
				return (res);// возвращаем 0 или -1
			if (t_down->down->letter == '@')//перепрыгиваем первую строку
				t_down = t_down->down;
			t_down = t_down->down;
		}
		tmp = tmp->right;
	}
	return (1);
}
