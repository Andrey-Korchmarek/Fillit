/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:02:44 by mashley           #+#    #+#             */
/*   Updated: 2019/11/01 19:02:50 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		ft_putstr("error");
	fd = open(argv[1], O_RDONLY);
	read_and_validation(fd);
	calculation();
	output();
	close(fd);
	return (0);
}
