/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:13:50 by adespina          #+#    #+#             */
/*   Updated: 2019/04/22 19:26:34 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*paw;

	len = 0;
	while (str[len])
		len++;
	paw = (char*)malloc(sizeof(*str) * (len + 1));
	if (paw == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		paw[i] = str[i];
		i++;
	}
	paw[i] = '\0';
	return (paw);
}
