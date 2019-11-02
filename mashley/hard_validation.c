#include "mashley.h"

int hard_validation(char *tetr)
{
	size_t	i;
	size_t 	sum;

	sum = 0;
	i = 1;
	while (i < 5)
	{
		sum += check_neig(tetr, ft_strrchri(tetr, '#', i))
		i++;
	}
	return (sum);
}