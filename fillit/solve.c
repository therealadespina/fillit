/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:42:13 by abooster          #+#    #+#             */
/*   Updated: 2019/06/19 16:19:27 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			add_tetra(char *tetra, char *map, int i)
{
	t_data	data;

	data.size = ft_strlen(map);
	data.len = len_n(map) + 1;
	data.letter = get_letter(tetra);
	data.p = 0;
	data.mod = 0;
	while (tetra[data.p] && tetra[data.p] == '.')
	{
		data.p++;
		data.mod++;
	}
	if (add_tetra2(tetra, map, i, data) == 1)
		return (1);
	return (0);
}

int			add_tetra2(char *tetra, char *map, int i, t_data data)
{
	while (tetra[data.p] && map[i])
	{
		while (i < data.size && tetra[data.p] && tetra[data.p] != '\n')
		{
			if (map[i] == '.')
				map[i++] = tetra[data.p++];
			else if (tetra[data.p] == data.letter)
				return (0);
			else
			{
				data.p++;
				i++;
			}
			data.mod++;
		}
		if (tetra[data.p] == '\n')
			data.p++;
		if (!tetra[data.p])
			return (1);
		i += data.len - data.mod;
		if (i >= data.size)
			return (0);
		data.mod = 0;
	}
	return (0);
}

int			len_n(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

char		get_letter(char *tetra)
{
	while (*tetra)
	{
		if (isupper(*tetra))
			return (*tetra);
		tetra++;
	}
	return (0);
}

char		*rm_tetra(char *tetra, char *map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (map[i] != '\0')
	{
		while (tetra[j] == '.')
			j++;
		if (map[i] == tetra[j])
			map[i] = '.';
		i++;
	}
	return (map);
}
