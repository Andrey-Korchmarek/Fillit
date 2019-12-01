/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:30:18 by mashley           #+#    #+#             */
/*   Updated: 2019/12/01 11:37:29 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_tetadd(t_etris **alst, t_etris *new)
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
