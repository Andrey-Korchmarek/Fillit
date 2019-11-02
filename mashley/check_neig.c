#include "mashley.h"

int check_neig(char *str, int i)
{
	size_t 	len;
	int 	sum;

	sum = 0;
	len = ft_strplen(str);
	if (i -1 < 0)
	{
		 if (str[i + 1] == '#')
		  	sum++;
		if (str[i + 5] == '#')
		 	sum++;
	}
	else if (i - 5 < 0)
	{
		if (str[i - 1] == '#' )
			 sum++;
		if (str[i + 1] == '#')
			 sum++;
		 if (str[i + 5] == '#')
			 sum++;
	}
	else if (i + 5 >= len)
	{
		if (str[i - 5] == '#')
			 sum++;
		if (str[i - 1] == '#')
			 sum++;
		if (str[i + 1] == '#')
			 sum++;
	}
	else if (i + 1 >= len)
	{
		if (str[i - 5] == '#')
			 sum++;
		if (str[i - 1] == '#')
		 sum++;
	}
	return (sum);
}