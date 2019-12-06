/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uncover_and_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:20:36 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:20:40 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void		uncover_and_free(t_cwr **stack, int i)
{
	if (!*stack)
		return ;
	if (i == 1)
	{
		uncover((*stack)->head);
		stack_del_node(stack);
	}
	else
	{
		while (*stack)
		{
			uncover((*stack)->head);
			stack_del_node(stack);
		}
	}
}
