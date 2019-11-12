#include "includes/fillit.h"

// Ещё не доделал
void matrix_delete(matrix **list)
{
	t_dance* prev = NULL;

	while ((*list)->current->next)
	{
		prev = (*list)->current;
		(*list)->current = (*list)->current->next;
		free(prev);
	}
	free((*list)->current);
	free(*list);
	*list = NULL;
}