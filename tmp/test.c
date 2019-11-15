#include "includes/fillit.h"

int	*test(char count, int a, int form, char count)
{
	extern int g_tetramines[19][10];
	int *c;
	int i;
	int j;
	int *coord;

	c = g_tetramines[form];
	if (!(coord = (int*)malloc(sizeof(int) * 8)))
		return (-1);
	i = c[6];
	while (i <= (a - c[8]))
	{
		j = c[7];
		while (j <= (a - c[9]))
		{
			coord[0] = i;
			coord[1] = j;
			coord[2] = i + c[0];
			coord[3] = j + c[1];
			coord[4] = i + c[2];
			coord[5] = j + c[3];
			coord[6] = i + c[4];
			coord[7] = j + c[5];
			matrix_add_line(line_generator(count, coord));
			j++;
		}
		i++;
	}
}