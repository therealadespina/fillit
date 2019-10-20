/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:57:21 by adespina          #+#    #+#             */
/*   Updated: 2019/04/24 18:05:19 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strtrim_b(char const *s, size_t start, size_t end)
{
	size_t	i;
	char	*g;

	if (!(g = (char*)malloc(end - start + 1)))
		return (NULL);
	i = 0;
	while (start < end)
		g[i++] = s[start++];
	g[i] = '\0';
	return (g);
}
