#include "includes/fillit.h"

void	dicycle(matrix **root, int a, int form, int count)
{
	extern int	g_tetramines[19][10];
	int	i;
	int j;
	int *c;
	int *coord;

	c = g_tetramines[form];
	i = c[6];
	while (i <= (a - c[8]))
	{
		j = c[7];
		while (j <= (a - c[9]))
		{
			coord = get_coord(i, j, form);
			matrix_add_line(root, line_generator('A' + count, coord));
			j++;
		}
		i++;
	}
}