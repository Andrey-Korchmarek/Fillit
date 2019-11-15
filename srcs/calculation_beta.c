#include "includes/fillit.h"

char	*calculation_beta(int *storage, int len)
{
	int	i;
	int *coord;
	int size;

	size = min_map(len);
	i = 0;
	while (i < len)
	{
		coord = get_coordinates(size, storage[i]);
		matrix_add_line(line_generator('A' + i, coord));
		i++;
	}
	return (NULL);
}