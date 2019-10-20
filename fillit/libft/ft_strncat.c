/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:43:35 by adespina          #+#    #+#             */
/*   Updated: 2019/04/25 13:04:46 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *d, const char *s, size_t n)
{
	int	i;
	int	g;

	i = 0;
	if (*s == '\0')
		return (d);
	while (d[i] != '\0')
		i++;
	g = 0;
	while (s[g] != '\0' && g < (int)n)
	{
		d[i + g] = s[g];
		g++;
	}
	d[i + g] = '\0';
	return (d);
}
