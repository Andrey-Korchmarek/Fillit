#include "mashley.h"

int check_neig(char *str, int n)
{
	size_t 	len;
	int 	sum;

	sum = 0;
	len = ft_strplen(str);
	if (i -1 < 0)
	{
		str[i + 1] == '#' ? sum++;
		str[i + 5] == '#' ? sum++;
	}
	elif (i - 5 < 0)
	{
		str[i - 1] == '#' ? sum++;
		str[i + 1] == '#' ? sum++;
		str[i + 5] == '#' ? sum++;
	}
	elif (i + 5 >= len)
	{
		str[i - 5] == '#' ? sum++;
		str[i - 1] == '#' ? sum++;
		str[i + 1] == '#' ? sum++;
	}
	elif (i + 1 >= len)
	{
		str[i - 5] == '#' ? sum++;
		str[i - 1] == '#' ? sum++;
	}
	return (sum)
}