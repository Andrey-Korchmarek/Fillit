#include "mashley.h"

char *check(char *line)
{
	int i;
	char *str;

	str = (char*)malloc(sizeof(char) * 16);
	i = 0;
	while (*line)
	{
		if (*line == '#')
			str[i++] = '1';
		else if (*line == '.')
			str[i++] = '0';
		line++;
	}
	return (str);
}