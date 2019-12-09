/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tetris.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:17:41 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 19:17:44 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/* */

void	print_tetris(t_ring *root)
{
	t_dance *print;

	print = (root->current)->right;
	while (print->letter != '!')
	{
		if (ft_isupper(print->down->letter))
			ft_putchar(print->down->letter);
		else
			ft_putchar('.');
		if (print->x != print->right->x)
			ft_putchar('\n');
		print = print->right;
	}
}
