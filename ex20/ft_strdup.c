/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:30:37 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 16:33:07 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		result;

	result = 0;
	while (*s)
	{
		++result;
		++s;
	}
	return (result);
}

char	*ft_strdup(char *s)
{
	char	*new;
	int		i;

	if (!(new = malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}
