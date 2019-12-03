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

#include "includes/fillit.h"

int g_tetramines[19][10] =	{{0, 1, 0, 2, 0, 3, 0, 0, 0, 3},
							   {0, 1, 0, 2, 1, 0, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 1, 0, 0, 1, 2},
							   {0, 1, 0, 2, 1, 2, 0, 0, 1, 2},
							   {0, 1, 1, -1, 1, 0, 0, 1, 1, 1},
							   {0, 1, 1, 0, 1, 1, 0, 0, 1, 1},
							   {0, 1, 1, 1, 1, 2, 0, 0, 1, 2},
							   {1, -2, 1, -1, 1, 0, 0, 2, 1, 0},
							   {1, -1, 1, 0, 1, 1, 0, 1, 1, 1},
							   {1, 0, 1, 1, 1, 2, 0, 0, 1, 2},
							   {0, 1, 1, 0, 2, 0, 0, 0, 2, 1},
							   {0, 1, 1, 1, 2, 1, 0, 0, 2, 1},
							   {1, -1, 1, 0, 2, -1, 0, 1, 2, 0},
							   {1, 0, 1, 1, 2, 1, 0, 0, 2, 1},
							   {1, -1, 1, 0, 2, 0, 0, 1, 2, 0},
							   {1, 0, 1, 1, 2, 0, 0, 0, 2, 1},
							   {1, 0, 2, -1, 2, 0, 0, 1, 2, 0},
							   {1, 0, 2, 0, 2, 1, 0, 0, 2, 1},
							   {1, 0, 2, 0, 3, 0, 0, 0, 3, 0}};

int main(int argc, char **argv)
{
	int fd;
	char *result;
	matrix *root;
	int 	output;
	int a;
	int		count;

	/*
	 if (argc != 2)
	{
		ft_putstr("Give me one file");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	 if (fillit(fd) == 0)
	 {
	 ft_putstr("error\n");
	 return (-1);
	 }
	 *
	 *
	 *
	 *
	 *
	 *
	 *
	 *
	 *
	 *
	 * */

	if (argc != 2)
	{
		ft_putstr("Give me one file");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	result = "main";
	count = 0;
	root = fillit(fd, &count);
	if (root->size == 0)
	{
		result = "error\n";
		ft_putstr(result);
		return (0);
	}
	a = min_map(count);
	output = calculation(root, count);
	//matrix_print(root);
	matrix_delete(root);
	close(fd);

	//ft_putstr(result);
	return (0);
}
