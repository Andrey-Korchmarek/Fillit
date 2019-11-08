/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Created: 2019/11/01 19:02:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/07 15:57:46 by io               ###   ########.fr       */
=======
/*   Created: 2019/10/29 12:26:45 by aelphias          #+#    #+#             */
/*   Updated: 2019/10/29 12:35:22 by aelphias         ###   ########.fr       */
>>>>>>> 653e653f195ae161a43b17dbd9449ed607e7f4aa
=======
/*   Created: 2019/10/29 12:26:45 by aelphias          #+#    #+#             */
/*   Updated: 2019/10/29 12:35:22 by aelphias         ###   ########.fr       */
>>>>>>> a387284b1a2f24c3d308770d4fbc69df9a19ce66
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(int fd)
{
	char	*result;
	int		ret;
	char	buff[22];
	t_etris	*list;
	char 	count;

	list = NULL;
	count = 'A';
	while ((ret = read(fd, buff, 21)))
	{
		buff[ret] = '\0';
		if (validation(buff))
		{
			safe(&list, buff, count);
			count++;
		}

		else
		{
			ft_putstr("error\n");
			return (NULL);
		}
	}
	result = NULL;
	return (result);
}