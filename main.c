/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:33:52 by mashley           #+#    #+#             */
/*   Updated: 2019/11/01 12:33:56 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int fd;

	fd = open("1_figure", O_RDONLY);
	read_and_validation(fd);
	close(fd);
	return (0);
}
