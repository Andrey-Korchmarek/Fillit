/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:22:34 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/27 17:53:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	char	map[16][17]; /*gen_map*/
	char	storage[26]; /*fillit*/
	int		fd; /*read()*/
	int		i;
	int		size;
	int		count;

	count = 0;
	size = 16;
	i = 0;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit  file_with_tetriminos\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	gen_map(map);
	fillit(fd, count, storage);
	backtrack(count, storage, map);
 	while (i < size)
     {
        printf("%s\n", map[i]); 
        i++;       
     }
	close(fd);
	return (0);
}