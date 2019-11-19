/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dannew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:33:24 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 10:33:27 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_dance	*ft_dannew(char queue, int x, int y)
{
	t_dance	*tmp;

	tmp = (t_dance*)malloc(sizeof(t_dance));
	if (!tmp)
		return (NULL);
	tmp->letter = queue;
	tmp->x = x;
	tmp->y = y;
	tmp->left = tmp;
	tmp->right =tmp;
	tmp->up = tmp;
	tmp->down = tmp;
	return (tmp);
}