/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:03:33 by adespina          #+#    #+#             */
/*   Updated: 2019/04/19 15:00:36 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	p;
	int		u;

	p = ft_strlen(dest);
	u = 0;
	while (src[u] != '\0')
	{
		dest[p + u] = src[u];
		u++;
	}
	dest[p + u] = '\0';
	return (dest);
}
