/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:59:23 by adespina          #+#    #+#             */
/*   Updated: 2019/05/17 16:13:20 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			a;
	char		**arr;

	a = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ilovecountwords(s, c) + 1))))
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (a < ilovecountwords(s, c) && s[i])
	{
		if (!(arr[a] = memory_for_string(s, c, &i)))
		{
			free_memory_for_array(arr);
			return (NULL);
		}
		a++;
	}
	arr[a] = NULL;
	return (arr);
}
