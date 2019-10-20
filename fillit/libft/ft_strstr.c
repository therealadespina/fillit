/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:48:43 by adespina          #+#    #+#             */
/*   Updated: 2019/04/26 15:38:37 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	int	i;
	int	j;

	i = 0;
	if ((unsigned char)find[0] == '\0')
		return ((char*)s);
	if ((unsigned char)s[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		j = 0;
		while (find[j] == s[i + j])
		{
			if (find[j + 1] == '\0')
			{
				return ((char*)(s + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
