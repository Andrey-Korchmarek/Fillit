/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:00:36 by mashley           #+#    #+#             */
/*   Updated: 2019/11/25 16:00:47 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/* Тестовый файл */
char	*test(int *storage, int tetrnom)
{
	matrix	*root;
	int		i;

	if (!(root = matrix_generator(min_map(tetrnom))))
		return (NULL);
	root->size = tetrnom;
	//matrix_print(root);
	//ft_putchar('T');
	i = 0;
	while (i < tetrnom)
	{
		dicycle(&root, min_map(tetrnom), storage[i], i);
		i++;
	}
	//matrix_print(root);
//	ft_putchar('T');
	matrix_dancing_links(&root);
	//matrix_print(root);
	return ("test");
}
