/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:51:13 by mashley           #+#    #+#             */
/*   Updated: 2019/09/25 12:54:58 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list*elem))
{
	while (lst && f)
	{
		f(lst);
		lst = lst->next;
	}
}
