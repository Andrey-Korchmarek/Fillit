/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:50:15 by mashley           #+#    #+#             */
/*   Updated: 2019/09/25 12:50:27 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst)
		{
			new->next = (*alst);
			(*alst) = new;
		}
		else
			(*alst) = new;
	}
}
