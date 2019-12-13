/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:53:13 by mashley           #+#    #+#             */
/*   Updated: 2019/12/12 12:52:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	validation(char *tetr)
{
	char	**tmp;
	int		i;

	i = 0;
	if (!(check_sign(tetr)))
		return (0);
	tmp = ft_strsplit(tetr, '\n');
	if (check_neig1(tmp) + check_neig2(tmp) < 6)
	{
		ft_memdeltab(tmp);
		return (0);
	}
	ft_memdeltab(tmp);
	return (1);
}
