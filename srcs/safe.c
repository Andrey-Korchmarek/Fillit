/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:23:41 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 12:23:45 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	safe(t_etris **list, char *tetr, char count)
{
	char	**tmp;
	int		*valtet;

	tmp = ft_strsplit(tetr, '\n');
	valtet = eight_to_six(coordinates(tmp));
	ft_tetadd(list, ft_tetnew(valtet, count));
}
