/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:51:47 by abooster          #+#    #+#             */
/*   Updated: 2019/06/21 12:55:38 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				fillit(char **argv)
{
	t_fillit	data;

	data.array = tetras();
	if (!(data.num = read_file(argv[1], data.array)))
		return (0);
	data.tetracount = count_tetras(data.num);
	data.smallestsize = make_smap(data.tetracount * 4);
	data.map = make_map(data.smallestsize);
	data.tetras = true_tetras(data.num, data.tetracount);
	data.tetras = name_boxes(data.tetras, data.tetracount);
	solve(data.tetras, &data.map, data.tetracount, data.smallestsize);
	free(data.tetras);
	free(data.map);
	return (1);
}

int				main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("usage: fillit [target_file]\n");
		return (0);
	}
	else if (argc == 2)
	{
		if (!(fillit(argv)))
			ft_putstr("error\n");
	}
	else
		ft_putstr("error\n");
	return (0);
}
