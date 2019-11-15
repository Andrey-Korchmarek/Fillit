#include "includes/fillit.h"

char	*calculation_beta(int *storage, int len)
{
	int	i;
	matrix *root;
	int size;

	size = min_map(len);
	root = matrix_generator(size);
	i = 0;
	while (i < len)
	{
		//coord = get_coordinates(size, storage[i]);
		matrix_add_line(&root, line_generator('A' + i, size, storage[i]));
		i++;
	}
	return (NULL);
}