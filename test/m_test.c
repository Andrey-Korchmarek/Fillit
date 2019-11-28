/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_test.tetr                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:46:24 by mashley           #+#    #+#             */
/*   Updated: 2019/11/26 14:46:29 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/* Тестовый файл */


static void m_add_down(matrix *alst, t_dance *tmp)
{
	t_dance *prev;

	if (alst->current == NULL)
		alst->current = tmp;
	else if (alst->current->down == alst->current)
	{
		alst->current->up = tmp;
		alst->current->down = tmp;
		tmp->up = alst->current;
		tmp->down = alst->current;
	}
	else
	{
		prev = alst->current->up;
		tmp->down = alst->current;
		tmp->up = alst->current->up;
		alst->current->up = tmp;
		alst->current->up->down = tmp;
	}
	alst->size++;
}

static void m_add_elem(t_dance **alst, t_dance *tmp)
{
	t_dance *prev;

	if (!(*alst))
		(*alst) = tmp;
	else if ((*alst)->down == (*alst))
	{
		(*alst)->up = tmp;
		(*alst)->down = tmp;
		tmp->up = (*alst);
		tmp->down =(*alst);
	}
	else
	{
		prev = (*alst)->up;
		tmp->down = (*alst);
		tmp->up = (*alst)->up;
		(*alst)->up = tmp;
		(*alst)->up->down = tmp;
	}
}

static void m_add_right(matrix *alst, t_dance *tmp)
{
	if (alst->current == NULL)
		alst->current = tmp;
	else if (alst->current->right == alst->current)
	{
		alst->current->left = tmp;
		alst->current->right = tmp;
		tmp->left = alst->current;
		tmp->right = alst->current;
	}
	else
	{
		tmp->right = alst->current;
		tmp->left = alst->current->left;
		alst->current->left = tmp;
		alst->current->left->right = tmp;
	}
	alst->size++;
}

static matrix *m_new(t_dance *current, size_t size)
{
	matrix *tmp;

	tmp = (matrix*)malloc(sizeof(matrix));
	tmp->current = current;
	tmp->size = size;
	return (tmp);
}

static int *t_get_coord(int x, int y, int form)
{
	extern int g_tetramines[19][10];
	int *c;
	int *result;

	result =(int*)malloc(sizeof(int) * 8);
	c = g_tetramines[form];
	result[0] = x;
	result[1] = y;
	result[2] = x + c[0];
	result[3] = y + c[1];
	result[4] = x + c[2];
	result[5] = y + c[3];
	result[6] = x + c[4];
	result[7] = y + c[5];
	return (result);
}

static matrix *m_generate(int a)
{
	matrix *root;
	int i;
	int j;

	root = m_new(ft_dannew('!', -1, -1), 1);
	i = 0;
	while (i <= a)
	{
		j = 0;
		while (j <= a)
		{
			m_add_right(root, ft_dannew('@', i, j));
			j++;
		}
		i++;
	}
	return (root);
}

static matrix *m_line_generate(char queue, int *coord)
{
	matrix *head;
	t_dance *tmp;
	int i;

	head = m_new(ft_dannew(queue, -1, 0), 1);
	i = 0;
	while (i < 8)
	{
		tmp = ft_dannew(queue, coord[i], coord[i + 1]);
		m_add_right(head, tmp);
		i += 2;
	}
	return (head);
}

static void m_add_line(matrix *alst, matrix *line)
{
	t_dance *hat;
	t_dance *tmp;

	m_add_down(alst, line->current);
	hat = alst->current->right;
	tmp = line->current->right;
	while (alst->current->right->letter == '@')
	{
		while (alst->current->right->x != tmp->x ||
		alst->current->right->y != tmp->y)
			alst->current->right = alst->current->right->right;
		m_add_elem(&hat, tmp);
		line->current->right = line->current->right->right;
	}
	alst->size += line->size;
}

char	*m_test(int *storage, int tetrnom)
{
	extern int	g_tetramines[19][10];
	int count;
	int i;
	int j;
	int *tetr;
	int a;
	int *coord;
	matrix *root;
	matrix *line;

	a = min_map(tetrnom);
	root = m_generate(a);
	count = 0;
	while (count < tetrnom)
	{
		tetr = g_tetramines[storage[count]];
		i = tetr[6];
		while (i <= (a - tetr[8]))
		{
			j = tetr[7];
			while (j <= (a - tetr[9]))
			{
				coord = t_get_coord(i, j, storage[count]);
				line = m_line_generate('A' + count, coord);
				free(coord);
				m_add_line(root, line);
				j++;
			}
			i++;
		}
		count++;
	}
	return ("test");
}
