/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cover_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:05:37 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:05:40 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	ft_cover_all(t_list **queue, t_dance *goal)
{
	int		res;
	t_list	*tmp;

	ft_cover_same_name(goal, queue);//скрываем строки с одним именем и сохраняем в лист хедеры
	res = ft_cover_cross_row(queue, goal);//скрываем строки по пересечению
	if (res < 1)
	{
		ft_uncover(*queue);//восстанавливаем строки по хедерам
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
