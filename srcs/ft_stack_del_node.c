/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:14:59 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 13:15:04 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_stack_del_node(t_cwr **stack)
{
	t_list	*head;
	t_list	*tmp;
	t_cwr	*node;

	head = (t_list*)(*stack)->head;
	if ((*stack)->right == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		node = *stack;
		*stack = (*stack)->right;
		free(node);
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
