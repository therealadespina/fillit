/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:47:37 by adespina          #+#    #+#             */
/*   Updated: 2019/04/21 14:20:07 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t			g;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)destination;
	b = (unsigned char*)source;
	g = 0;
	while (g < n)
	{
		a[g] = b[g];
		if (b[g] == (unsigned char)c)
			return (destination + g + 1);
		g++;
	}
	return (NULL);
}
