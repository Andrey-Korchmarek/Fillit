/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/01 13:36:16 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
	 
int main(int argc, char argv)
{
	int fd;
	char *result;
	
	if (argc != 2)
	{
		ft_putstr("Give me one file");
		return (0);
	}
	fd = 0;
	fd = open(argv[1], O_RDONLY);
	result = fillit(fd);
	return (0);
	
}
