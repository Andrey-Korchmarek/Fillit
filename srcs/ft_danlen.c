/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_danlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:48:53 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 18:48:56 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

size_t	ft_danlen(t_dance *lst)
{
	size_t count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->right;
	}
	return (count);
}
