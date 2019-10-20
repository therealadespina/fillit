/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:37:04 by adespina          #+#    #+#             */
/*   Updated: 2019/04/21 17:36:59 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;
	int		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen(s);
		if (!(r = (char*)malloc((j + 1) * sizeof(char))))
			return (NULL);
		while (s[i] != '\0')
		{
			r[i] = f(i, s[i]);
			i++;
		}
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}
