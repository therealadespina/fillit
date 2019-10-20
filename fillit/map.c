/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:41:43 by abooster          #+#    #+#             */
/*   Updated: 2019/06/21 12:54:39 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			make_smap(int i)
{
	int		size;

	size = 0;
	while (i > size * size)
	{
		size++;
		if (size > 46340)
			return (0);
	}
	return (size);
}

char		*make_map(int size)
{
	char	*map;
	int		i;
	int		totalsize;
	int		tmp;

	i = 0;
	totalsize = ((size + 1) * size);
	tmp = 0;
	map = ft_strnew(totalsize);
	ft_memset(map, '.', totalsize);
	while (i < size)
	{
		tmp = tmp + (totalsize / size);
		map[tmp - 1] = '\n';
		i++;
	}
	return (map);
}
