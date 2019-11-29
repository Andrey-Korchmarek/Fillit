/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid_root.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 11:17:32 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 11:17:36 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	ft_check_valid_root(matrix *root, int count1)
{
	t_dance	*tmp;
	int		count2;

	/*count1 = 0;
	while (tetr)
	{
		count1++;
		tetr = tetr->next;
	}*/
	count2 = 0;
	tmp = (root->current)->down;
	while (tmp != root->current)
	{
		if (tmp->letter != tmp->up->letter)
			count2++;
		tmp = tmp->down;
	}
	if (count1 == count2)
		return (count1);
	else
		return (0);
}
