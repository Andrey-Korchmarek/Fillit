/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:53:13 by mashley           #+#    #+#             */
/*   Updated: 2019/12/11 19:59:29 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	validation(char *tetr)
{
	char **tmp;

	if (!(check_sign(tetr)))
		return (0);
	tmp = ft_strsplit(tetr, '\n');
	if (check_neig1(tmp) + check_neig2(tmp) < 6)
	{
		ft_memdel((void**)tmp);
		ft_memdel((void**)tetr);
		return (0);
	}
	ft_memdel((void**)tmp);
	ft_memdel((void**)tetr);
	return (1);
}
