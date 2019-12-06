/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cover_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:09:49 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:09:53 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Принимает узел матрицы и лист для хранения скрытых строк
 *
 * Скрывает
 *
 * Возвращает число в зависимости от результата
 * 0 - если у тетраминки осталась только одна строка и скрывать ничего не нужно
 * -1 если не удалось замалочить элемент листа
 * 1 если удалось
 *
 * */

int	cover_row(t_dance *rowcvr, t_list **queue)
{
	t_dance	*row;
	t_list	*tmp;

	if (rowcvr->letter != rowcvr->up->letter &&
	rowcvr->letter != rowcvr->down->letter)
		return (0);
	row = rowcvr;
	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (-1);
	tmp->content = row;
	tmp->next = NULL;
	ft_lstadd(queue, tmp);
	while (row != rowcvr->left)
	{
		(row->up)->down = row->down;
		(row->down)->up = row->up;
		row = row->right;
	}
	(row->up)->down = row->down;
	(row->down)->up = row->up;
	return (1);
}
