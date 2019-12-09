/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:01:16 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:01:29 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_cwr	*stack_new(t_list *new)
{
	t_cwr		*tmp;

	tmp = (t_cwr*)malloc(sizeof(t_cwr));
	if (!new)
		return (NULL);
	tmp->right = NULL;
	tmp->head = new;
	return (tmp);
}
