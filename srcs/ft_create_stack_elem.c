/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack_elem.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:00:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 14:00:14 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_cwr	*ft_create_stack_elem(t_list *new)
{
	t_cwr		*tmp;

	tmp = (t_cwr*)malloc(sizeof(t_cwr));
	if (!new)
		return (NULL);
	tmp->right = NULL;
	tmp->head = new;
	return (tmp);
}
