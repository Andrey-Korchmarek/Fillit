/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:24:23 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:24:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	stack_del_node(t_cwr **stack)
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
