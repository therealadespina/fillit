/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:28:21 by adespina          #+#    #+#             */
/*   Updated: 2019/04/21 17:33:46 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	int		i;
	int		j;

	if (!s || !f)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	if (!(r = (char*)malloc((j + 1) * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		r[i] = f(s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
