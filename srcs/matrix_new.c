/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_t_ring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:52:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/11 17:52:49 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_ring	*matrix_new(void)
{
	t_ring *tmp;

	if (!(tmp = (t_ring*)malloc(sizeof(t_ring))))
		return (NULL);
	tmp->size = 0;
	tmp->current = NULL;
	return (tmp);
}
