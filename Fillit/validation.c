/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:53:13 by mashley           #+#    #+#             */
/*   Updated: 2019/11/08 11:53:21 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

static	int	check_sign(char *tetr)
{
	int len;

	len = ft_strlen(tetr);
	if (ft_strcount(tetr, '.') != 12)
		return (0);
	if (ft_strcount(tetr, '#') != 4)
		return (0);
	if (ft_strcount(tetr, '\n') != (len / 5 + ret % 5))
		return (0);
	return (1);
}

static	int	check_neig1(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 0;
	valid = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr[i][j] == '#')
			{
				if (j < 3 && tetr[i][j + 1] == '#')
					valid++;
				if (i < 3 && tetr[i + 1][j] == '#')
					valid++;
			}
			j++;
		}
		i++;
	}
	return (valid);
}

static	int	check_neig2(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 3;
	valid = 0;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (tetr[i][j] == '#')
			{
				if (j > 0 && tetr[i][j - 1] == '#')
					valid++;
				if (i > 0 && tetr[i - 1][j] == '#')
					valid++;
			}
			j--;
		}
		i--;
	}
	return (valid);
}

int			validation(char *tetr)
{
	char **tmp;

	if (!(check_sign(tetr)))
		return (0);
	tmp = ft_strsplit(tetr, '\n');
	if (check_neig1(tmp) + check_neig2(tmp) < 6)
		return (0);
	return (1);
}
