/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_dest_row.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 06:02:41 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 06:02:46 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_delete_dest_row(t_dance *head)
{
	t_dance	*tmp1;
	t_dance	*tmp2;

	tmp1 = head->left;
	while (tmp1 != head)
	{
		tmp2 = tmp1->left;
		free(tmp1);
		tmp1 = tmp2;
	}
	free(tmp1);
}
