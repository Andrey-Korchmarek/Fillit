/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_danadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:48:25 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:48:30 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_danadd(t_dance **alst, t_dance*new)
{
	if (new)
	{
		if (*alst)
		{
			new->right= (*alst);
			(*alst) = new;
		}
		else
			(*alst) = new;
	}
}
