/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:42:41 by abooster          #+#    #+#             */
/*   Updated: 2019/10/20 20:41:39 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			**name_boxes(char **arr, int boxescount)
{
	int			i;
	int			n;

	i = 0;
	while (i < boxescount)
	{
		n = 0;
		while (arr[i][n] != 0)
		{
			if (arr[i][n] == '#')
				arr[i][n] = (i + 65);
			n++;
		}
		i++;
	}
	return (arr);
}

int				count_tetras(int *arr)
{
	int			i;

	i = 0;
	while ((i <= 26) && arr[i])
		i++;
	return (i);
}

char			**true_tetras(int *arr, int count)
{
	static char	*truetetras[20];

	truetetras[0] = "##\n##";
	truetetras[1] = "#\n#\n#\n#";
	truetetras[2] = "####";
	truetetras[3] = ".#\n##\n#";
	truetetras[4] = "##.\n.##";
	truetetras[5] = ".##\n##";
	truetetras[6] = "#.\n##\n.#";
	truetetras[7] = "#..\n###";
	truetetras[8] = ".#\n.#\n##";
	truetetras[9] = "###\n..#";
	truetetras[10] = "##\n#.\n#";
	truetetras[11] = "..#\n###";
	truetetras[12] = "#.\n#.\n##";
	truetetras[13] = "###\n#";
	truetetras[14] = "##\n.#\n.#";
	truetetras[15] = ".#.\n###\n";
	truetetras[16] = "#.\n##\n#";
	truetetras[17] = "###\n.#";
	truetetras[18] = ".#\n##\n.#";
	truetetras[19] = "##\n##";
	return (tetralloc(truetetras, arr, count));
}

char			**tetras(void)
{
	static char *arr_tetras[19];

	arr_tetras[0] = "##..##";
	arr_tetras[1] = "#...#...#...#";
	arr_tetras[2] = "####";
	arr_tetras[3] = "#..##..#";
	arr_tetras[4] = "##...##";
	arr_tetras[5] = "##.##";
	arr_tetras[6] = "#...##...#";
	arr_tetras[7] = "#...###";
	arr_tetras[8] = "#...#..##";
	arr_tetras[9] = "###...#";
	arr_tetras[10] = "##..#...#";
	arr_tetras[11] = "#.###";
	arr_tetras[12] = "#...#...##";
	arr_tetras[13] = "###.#";
	arr_tetras[14] = "##...#...#";
	arr_tetras[15] = "#..###";
	arr_tetras[16] = "#...##..#";
	arr_tetras[17] = "###..#";
	arr_tetras[18] = "#..##...#";
	return (arr_tetras);
}

char			**tetralloc(char *truetetras[20], int *vals, int count)
{
	char		**arr;
	int			i;

	if (!(arr = (char**)ft_memalloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	while (i < count)
	{
		if (!(arr[i] = (char*)ft_memalloc(sizeof(char) * 49)))
			return (NULL);
		ft_strcpy(arr[i], truetetras[vals[i]]);
		i++;
	}
	return (arr);
}
