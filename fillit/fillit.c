/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/16 19:46:56 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*fillit(int fd)
{
	char	*result;
	int		ret;
	char	buff[22];
	int		storage[26];
	int		count;
	int i;

	i = 0;
	count = 0;
	while ((ret = read(fd, buff, 21)) && (count < 26))
	{
		buff[ret] = '\0';
		if ((validation(buff)))
		{
			if ((storage[count] = check_tetr(buff)) != -1)
				count++;
		}
		else
		{
			ft_putstr("error\n");
			return ("NULL");
		}
	}
	if ((ft_strlen(buff) != 20))
	{
		ft_putstr("error\n");
		return ("NULL");
	}
	printf("{ret=%i}\n", ret);
	printf("{buff=%s}\n", buff);
	//result = calculation_beta(storage, count);
	while (i < count)
	{
		ft_putnbr(storage[i]);
		ft_putchar('\n');
		i++;
	}
	result = NULL;
	return (result);
}
