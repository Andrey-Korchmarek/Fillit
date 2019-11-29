/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cover_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:36:04 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:36:08 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		ft_cover_row(t_dance *rowcvr, t_list **queue)
{
	t_dance	*row;
	t_list	*tmp;

	if (rowcvr->letter != rowcvr->up->letter && rowcvr->letter != rowcvr->down->letter)//если осталась одна строка у тетраминки
		return (0);
	row = rowcvr;
	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (-1);
	tmp->content = row;//запись ссылки на строку в лист?
	tmp->next = NULL;
	ft_lstadd(queue, tmp);//добавление элемента в лист
	while (row != rowcvr->left)//идём направо пока не дойдём до хедера
	{
		(row->up)->down = row->down;//скрываем узел строки
		(row->down)->up = row->up;
		row = row->right;
	}
	(row->up)->down = row->down;
	(row->down)->up = row->up;
	return (1);
}
