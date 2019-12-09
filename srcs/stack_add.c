/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:03:55 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:03:59 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_cwr	*stack_add(t_cwr **stack, t_list *new)
{
	t_cwr	*tmp;

	if (!stack || !new)
		return (NULL);
	tmp = stack_new(new);
	if (!tmp)
		return (NULL);
	if (!*stack)
		*stack = tmp;
	else
	{
		tmp->right = *stack;
		*stack = tmp;
	}
	return (*stack);
}
