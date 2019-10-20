/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_for_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:41:25 by adespina          #+#    #+#             */
/*   Updated: 2019/04/24 17:45:54 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*memory_for_string(char const *s, char c, int *i)
{
	int		t;
	char	*memory;

	t = 0;
	if (!(memory = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[*i] != c && s[*i])
	{
		memory[t] = s[*i];
		*i += 1;
		t++;
	}
	memory[t] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (memory);
}
