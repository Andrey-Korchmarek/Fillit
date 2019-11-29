/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cover_same_name.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:07:08 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:07:11 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void		ft_cover_same_name(t_dance *goal, t_list **queue)
{
	t_dance	*node;

	node = goal->down;
	while (node != goal)//идти вниз до полного круга и скрывание строк с такой же буквой
	{
		if (goal->letter == node->letter)
			ft_cover_row(node, queue);//сохраняем хедер в лист и скрываем строку
		node = node->down;
	}
}
