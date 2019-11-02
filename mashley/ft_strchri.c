#include "mashley.h"

size_t	ft_strrchri(const char *str, int c, size_t count)
{
	size_t 	i;
	size_t 	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			num++;
			if (num == count)
				return (i);
		}
		i++;
	}
	if (c == '\0')
		return (ft_strplen(str));
	return (0);
}