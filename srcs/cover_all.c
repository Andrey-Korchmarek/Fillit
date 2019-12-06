/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cover_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:16:19 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:16:22 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Функция принимает лист для хранения хедеров скрытых строк и узел, который
 * надо оставить в матрице
 *
 * Возвращет число в зависимости от результа
 *-1
 * 0
 * 1
 * 2 если лист пустой
 * */

int	cover_all(t_list **queue, t_dance *goal)
{
	int		res;
	t_list	*tmp;

	cover_same_letter(goal, queue);
	res = cover_cross_row(queue, goal);
	if (res < 1)
	{
		uncover(*queue);
		while (*queue)
		{
			tmp = (*queue)->next;
			free(*queue);
			*queue = tmp;
		}
		return (res);
	}
	if (!*queue)
		return (2);
	return (1);
}
