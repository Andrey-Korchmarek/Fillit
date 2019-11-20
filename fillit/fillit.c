/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:31:03 by mashley           #+#    #+#             */
/*   Updated: 2019/11/19 15:30:14 by aelphias         ###   ########.fr       */
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
		return ("error\n");
	}
		if ((ft_strlen(buff) != 20))
			return ("error\n");
	//printf("{ret=%i}\n", ret);
	//printf("{buff=%s}\n", buff);
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
