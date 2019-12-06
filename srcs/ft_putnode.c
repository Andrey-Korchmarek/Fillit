/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:02:56 by mashley           #+#    #+#             */
/*   Updated: 2019/11/16 11:02:59 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_putnode(t_ring *root)
{
	ft_putchar(root->current->letter);
	ft_putchar(' ');
	ft_putnbr(root->current->x);
	ft_putchar(' ');
	ft_putnbr(root->current->y);
	ft_putstr(" | ");
}
