/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:54:52 by mashley           #+#    #+#             */
/*   Updated: 2019/11/29 12:54:57 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

t_cwr			*ft_add_to_stack(t_cwr **stack, t_list *new)//создание элемента стека и добавление
{
	t_cwr	*tmp;//стек хранит в себе очереди скрытых строк

	if (!stack || !new)
		return (NULL);
	tmp = ft_create_stack_elem(new);//создание элемента стека
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
