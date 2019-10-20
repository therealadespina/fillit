/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placeit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:41:55 by abooster          #+#    #+#             */
/*   Updated: 2019/07/08 12:58:00 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place(char **tetras, char *map, int tetra, int total)
{
	int	i;
	int	x;

	if (tetra == -1)
		i = 0;
	else
		i = tetra;
	x = -1;
	while (map[++x])
	{
		if (map[x] == '.' && add_tetra(tetras[i], map, x))
		{
			if ((i + 1) == total)
				return (1);
			else if ((i + 1) != total)
			{
				if (place(tetras, map, ++i, total))
					return (1);
			}
			rm_tetra(tetras[i--], map);
		}
		rm_tetra(tetras[i], map);
	}
	return (0);
}

void	solve(char **tetras, char **map, int total, int smallestsize)
{
	while (place(tetras, *map, -1, total) == 0)
	{
		free(*map);
		*map = make_map(smallestsize++);
	}
	ft_putstr(*map);
}

int		isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
