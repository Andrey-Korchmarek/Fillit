/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uncover_and_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:12:23 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 13:12:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void		ft_uncover_and_free(t_cwr **stack, int i)
{
	if (!*stack)
		return ;
	if (i == 1)
	{
		ft_uncover((*stack)->head);
		ft_stack_del_node(stack);
	}
	else
	{
		while (*stack)
		{
			ft_uncover((*stack)->head);
			ft_stack_del_node(stack);
		}
	}
}
