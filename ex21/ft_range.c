/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:33:24 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 16:34:58 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*result;
	int		i;

	if (min >= max)
		return (NULL);
	if (!(result = malloc(sizeof(*result) * (max - min))))
		return (NULL);
	i = min;
	while (i < max)
	{
		result[i - min] = i;
		++i;
	}
	return (result);
}
