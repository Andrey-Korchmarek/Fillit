/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_delete_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 14:54:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/23 14:54:48 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	matrix_delete_line(t_dance *head)
{
	t_dance	*tmp1;
	t_dance	*tmp2;

	if (!head)
		return ;
	tmp1 = head->left;
	while (tmp1 != head)
	{
		tmp2 = tmp1->left;
		free(tmp1);
		tmp1 = tmp2;
	}
	free(tmp1);
}
