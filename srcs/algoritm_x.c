/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:55:36 by mashley           #+#    #+#             */
/*   Updated: 2019/12/04 18:55:39 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
 * Функция принимает узел матрицы и стек для хранения скрытых строк
 *
 * Возвращает число в зависимости от результата
 * 1 если всё хорошо и указатель дошёл до начала матрицы
 * 0
 * -1
 * */

int	algoritm_x(t_dance *goal, t_cwr **stack)
{
	t_list	*q;
	int		cov_res;
	char	a;

	if (goal->letter == '!')
		return (1);
	a = goal->letter;
	while (goal->letter == a)
	{
		q = NULL;
		if ((cov_res = cover_all(&q, goal)) < 0)
			return (-1);
		if (cov_res > 0)
		{
			stack_add(stack, q);
			if (algoritm_x(goal->down, stack) == 1)
				return (1);
			if (cov_res < 2)
				uncover_and_free(stack, 1);
		}
		goal = goal->down;
	}
	return (0);
}
