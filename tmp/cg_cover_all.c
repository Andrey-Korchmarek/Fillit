#include "includes/fillit.h"

/*
** \brief			Function covers target row from the decision list.
** \param	rowcvr	Target row.
**			queue	List that contains all covered rows.
** \return	0		If target row is the last decision for some tetrimino.
**			-1		If there is some troubles with malloc.
**			1		If everything OK.
*/

static int		ft_cover_row(t_dance *rowcvr, t_list **queue)
{
	t_dance	*row;
	t_list	*tmp;

	if (rowcvr->letter != rowcvr->up->letter && rowcvr->letter != rowcvr->down->letter)//если осталась одна строка у тетраминки
		return (0);
	row = rowcvr;
	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (-1);
	tmp->content = row;//запись ссылки на строку в лист?
	tmp->next = NULL;
	ft_lstadd(queue, tmp);//добавление элемента в лист
	while (row != rowcvr->left)//идём направо пока не дойдём до хедера
	{
		(row->up)->down = row->down;//скрываем узел строки
		(row->down)->up = row->up;
		row = row->right;
	}
	(row->up)->down = row->down;
	(row->down)->up = row->up;
	return (1);
}

/*
** \brief			Function covers all rows, that contains nodes with the
** 					same coors as a goal.
** \param	goal	Row, which we choose as decision.
**			queue	List that contains all covered rows.
** \return	0		If row that we want to cower is the last decision for some
** 					tetrimino.
**			-1		If there is some troubles with malloc if ft_cover_row.
**			1		If everything OK.
*/

static int		ft_cover_cross_row(t_list **queue, t_dance *goal)
{
	t_dance	*tmp;
	t_dance	*t_down;
	t_dance	*t_left;
	int		res;

	tmp = goal->right;
	while (tmp != goal)//идти вправо один круг
	{
		t_down = tmp->down;//идем вниз, перепрыгивая 1ю строку, один круг
		if (t_down->letter == '@')
			t_down = t_down->down;
		while (t_down != tmp)//один круг
		{
			t_left = t_down->left;
			while (t_left->x != -1)//идём влево пока не встретим хедер
				t_left = t_left->left;
			if ((res = ft_cover_row(t_left, queue)) < 1)//скрываем строку и добавляем в лист
				return (res);// возвращаем 0 или -1
			if (t_down->down->letter == '@')//перепрыгиваем первую строку
				t_down = t_down->down;
			t_down = t_down->down;
		}
		tmp = tmp->right;
	}
	return (1);
}

/*
** \brief			Function covers all rows that are decisions of the same
** 					tetrimino, as in goal.
** \param	goal	Row, which we choose as decision.
**			queue	List that contains all covered rows.
*/

static void		ft_cover_same_letter(t_dance *goal, t_list **queue)
{
	t_dance	*node;

	node = goal->down;
	while (node != goal)//идти вниз до полного круга и скрывание строк с такой же буквой
	{
		if (goal->letter == node->letter)
			ft_cover_row(node, queue);//сохраняем хедер в лист и скрываем строку
		node = node->down;
	}
}

/*
** \brief			Function covers all rows that do not suit us. If there is
** 					some troubles or we are trying to cover last decision, it
** 					won't let as do it.
** \param	goal	Row, which we choose as decision.
**			queue	List that contains all covered rows.
** \return	0		If row that we want to cower is the last decision for some
** 					tetrimino.
**			-1		If there is some troubles with malloc if ft_cover_row.
**			1		If we cover smth.
**			2		If we didn't find the row to cover.
*/

int				cg_cover_all(t_list **queue, t_dance *goal)
{
	int		res;
	t_list	*tmp;

	ft_cover_same_letter(goal, queue);//скрываем строки с одним именем и сохраняем в лист хедеры
	res = ft_cover_cross_row(queue, goal);//скрываем строки по пересечению
	if (res < 1)
	{
		cg_uncover(*queue);//восстанавливаем строки по хедерам
		while (*queue)
		{
			tmp = (*queue)->next;
			free(*queue);
			*queue = tmp;
		}
		return (res);
	}
	if (!*queue)
		return (2);
	return (1);
}