/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:08:26 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/15 13:05:23 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int	calculation(matrix *root, int count)
{
	int			res;
	t_cwr		*stack;
	//int			n_tet;

	res = 0;
	while (!res)
	{
		//if ((n_tet = ft_check_valid_root(*root, tetr)) > 0)//проверка матрицы на ошибки создания
		//{
			stack = NULL;//для сохранения списков скрытых строк
			if ((res = cg_fillit((root->current)->down, &stack, count)) != 0)//основная рекурсивная функция
				break ;
			cg_uncover_and_free(&stack, 2);
		//}
		matrix_delete(root);
		count++;
	}
	if (res == 1)
		cg_print_tetris(root);//печатать результат. Я не понял
	cg_uncover_and_free(&stack, 2);
	return (res);
}

//{
	/*int coord[] = {0, 1, 1, 0, 1, 1};
	char queue;
	char field[4][5];
	int i;
	int x;
	int y;

	coord = {0, 1, 1, 0, 1, 1};
	x = 2;
	y = 2;
	queue = 'A';
	i = 0;
	while (i < 4)
	{
		ft_memset(field[i], '.', 4);
		field[i][4] = '\0';
		i++;
	}
	i = 0;

	field[x][y] = queue;
	while (i < 6)
	{
 		field[x + coord[i]][y + coord[i + 1]] = queue;
		i += 2;
	}


i = 0;
	while ( i < 4)
	{
		printf("%s\n", field[i]);
		i++;
	}*/
//}

//int main(void)
//{
//	calculation();
//	return (0);
//}
