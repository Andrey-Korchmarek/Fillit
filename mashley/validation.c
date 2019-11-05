#include "mashley.h"

int			check_neig1(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 0;
	valid = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetr[i][j] == '#')
			{
				if (j < 3 && tetr[i][j + 1] == '#')
					valid++;
				if (i < 3 && tetr[i + 1][j] == '#')
					valid++;
			}
			j++;
		}
		i++;
	}
	return (valid);
}

int			check_neig2(char **tetr)
{
	int			i;
	int			j;
	int			valid;

	i = 3;
	valid = 0;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (tetr[i][j] == '#')
			{
				if (j > 0 && tetr[i][j - 1] == '#')
					valid++;
				if (i > 0 && tetr[i - 1][j] == '#')
					valid++;
			}
			j--;
		}
		i--;
	}
	return (valid);
}

int *coordinates(char **tmp)
{
	int 	i;
	int 	j;
	int 	count;
	int 	*valtet;

	valtet = (int*)malloc(sizeof(int) * 8);
	count =0;
	i = 0;
	while (i <4)
	{
		j = 0;
		while (j <4)
		{
			if (tmp[i][j] == '#')
			{
				if (!count)
				{
					valtet[count] = i;
					valtet[count + 1] = j;
					count += 2;
				}
				else
				{
					valtet[count] = i - valtet[0];
					valtet[count + 1] = j - valtet[1];
					count += 2;
				}
			}
			j++;
		}
		i++;
	}
	return (valtet + 2);//Утечка
}

int *validation(char *tetr)
{
	char	**tmp;
	int		*valtet;


	if (!(simple_validation(tetr)))
		return (NULL);
	tmp = ft_strsplit(tetr, '\n');
	printf("%s\n", tmp[0]);
	if (check_neig1(tmp) + check_neig2(tmp) < 6)
		return (NULL);
	valtet = coordinates(tmp);
	return (valtet);
}